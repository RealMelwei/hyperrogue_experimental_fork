#ifndef ARCHIPELAGO_CPP
#define ARCHIPELAGO_CPP
#include "archipelago.hpp"
#include <apclient.hpp>
#include <apuuid.hpp>
#include <string>
#include "apinterface.cpp"
#include "nametables.cpp"

using namespace ap;
using namespace hr;
using namespace nlohmann;

/*
UTILITY FUNCTIONS
*/

int ap::getNumberOfProgressedLands(progressCheck prog){ //prog needs to be at least "unlocked"
  int n=0;
  for(int i=0; i<eItem::ittypes; i++){
    eItem item = eItem(i);
    if(isTreasure(item) && ap::landChecksReceived[item]>=prog) n++;
  }
  return n;
}

bool ap::isTreasure(eItem item){
  return (iinf[item].itemclass==IC_TREASURE || item==itHolyGrail);
}

int ap::getVirtualTreasureCount(progressCheck prog){
  if(inv::on){
    switch (prog){
     case progressCheck::orbunlocked: return 25;
     case progressCheck::orbunlockedglobal: return 50;
     case progressCheck::completed: return 100;
     default: return 0;
    }
  } else {
    switch (prog){
     case progressCheck::orbunlocked: return 10;
     case progressCheck::orbunlockedglobal: return 25;
     case progressCheck::completed: return 50;
     default: return 0;
    }
  }
}

eItem ap::getItemByName(std::string name){
  for(int i=0; i<eItem::ittypes; i++){
    eItem item = eItem(i);
    if(iinf[item].name == name) return item;
  }
  return eItem::itNone;
}

/*
RANDOMIZER INITIALIZATION
*/

void ap::init::initRando(){
  if (!client || client->get_state() < APClient::State::SOCKET_CONNECTED) {
    saves::readApState();
    init::initItemByID();
    connect_ap(APClient::DEFAULT_URI, "melwei");
  }
  return;
}

void ap::saves::readApState() {
  std::ifstream i("apstate.json");
  if (i.is_open()) {
    json state;
    i >> state;
    i.close();
    for(int i=0; i<eItem::ittypes; i++){
      eItem item = eItem(i);
      if(isTreasure(item)){ //Technically not neccessary, but reduces json accesses
        json::iterator itementry = state.find(iinf[item].name);
        if(itementry!=state.end()){
          std::string landname = itementry.key();
          landChecksReceived[item]=(progressCheck) state[landname]["Received"];
          landUnlockCheckSent[item]=(bool) (int) state[landname]["Unlock Sent"];
          landProgressChecksSent[item]=(progressCheck) state[landname]["Progress Sent"];
        } else {
          landChecksReceived[item]=progressCheck::notingame;
        }
      }
    }
    checks::alreadyHandledChecks = state["Already handled checks"];
  }
  return;
}

eLand ap::init::getFirstLand(){
  std::ifstream i("apworldsettings.json");
  if (i.is_open()) {
    json settings;
    i >> settings;
    std::string firstlandstr = settings["firstland"];
    for(int k=0; k<eLand::landtypes; k++) {
      eLand l = eLand(k);
      if(linf[l].name==firstlandstr){
        return l;
      }
    }
  }
  return laCrossroads;
}

/*
RANDOMIZER CHECK MANAGEMENT
*/

void ap::checks::resetInventory(){
  for(int i=0; i<eItem::ittypes; i++){
    eItem item = eItem(i);
    if(isTreasure(item)){
      landChecksReceived[item] = ((item==itHyperstone) ? progressCheck::unlocked : progressCheck::locked);
    }
  }
  return;
}

void ap::checks::receiveCheck(APClient::NetworkItem netitem){
  if(netitem.index==0){
    checks::resetInventory();
    checks::alreadyHandledChecks=-1;
  }
  if(netitem.index>checks::alreadyHandledChecks+1) {
    client->Sync();
  } else if(netitem.index==checks::alreadyHandledChecks+1) {
    eItem item = itemByID[netitem.item - HYPERROGUE_BASE_ID];
    switch (landChecksReceived[item])
    {
    case progressCheck::locked: 
      landChecksReceived[item]=progressCheck::unlocked;
      break;
    case progressCheck::unlocked: 
      landChecksReceived[item]=progressCheck::orbunlocked;
      break;
    case progressCheck::orbunlocked: 
      landChecksReceived[item]=progressCheck::orbunlockedglobal;
      break;
    case progressCheck::orbunlockedglobal:
      landChecksReceived[item]=progressCheck::completed;
      break;
    case progressCheck::notingame:
      std::cout << "Received check for " << iinf[item].name << ", which is not in the game." << std::endl;
      break;
    default:
      break;
    }
    checks::alreadyHandledChecks++;
    saves::writeApState();
  }
  return;
}

void ap::checks::collectCheck(eItem treasure, progressCheck progress){
  if(treasure != itHyperstone)
    client -> LocationChecks({getLocationID(treasure, progress)});
    saves::writeApState();
  return;
}

void ap::checks::updateChecks(){
  if(init::jsonInitialized){
    for(int i=0; i<eLand::landtypes; i++) {
      eLand l = eLand(i);
      eItem treasure = linf[l].treasure;

      if(ap::landProgressChecksSent[treasure] != progressCheck::notingame && !ap::landUnlockCheckSent[treasure] && landUnlockedLegacy(l)){
        ap::landUnlockCheckSent[treasure] = true;
        checks::collectCheck(treasure, progressCheck::unlocked);
      }
      if(landProgressChecksSent[treasure]==progressCheck::unlocked && items[treasure]>=(l==laCamelot ? 3 : getVirtualTreasureCount(progressCheck::orbunlocked))){
        ap::landProgressChecksSent[treasure] = progressCheck::orbunlocked;
        checks::collectCheck(treasure, progressCheck::orbunlocked);
      }
      if(landProgressChecksSent[treasure]==progressCheck::orbunlocked && items[treasure]>=(l==laCamelot ? 5 : getVirtualTreasureCount(progressCheck::orbunlockedglobal))){
        ap::landProgressChecksSent[treasure] = progressCheck::orbunlockedglobal;
        checks::collectCheck(treasure, progressCheck::orbunlockedglobal);
      }
      if(landProgressChecksSent[treasure]==progressCheck::orbunlockedglobal && items[treasure]>=(l==laCamelot ? 8 : getVirtualTreasureCount(progressCheck::completed))){
        ap::landProgressChecksSent[treasure] = progressCheck::completed;
        checks::collectCheck(treasure, progressCheck::completed);
      }
    }
  }
  return;
}

void ap::saves::writeApState(){
  std::ofstream statefile;
  statefile.open ("apstate.json");
  statefile << "{" << std::endl;
  for(int i=0; i<eItem::ittypes; i++){
    eItem item = eItem(i);
    if(isTreasure(item)) {
      statefile << "\"" << iinf[item].name << "\": {" << std::endl;
      statefile << "  \"Received\":" <<(int) landChecksReceived[item] << "," << std::endl;
      statefile << "  \"Unlock Sent\":" << landUnlockCheckSent[item] << "," << std::endl;
      statefile << "  \"Progress Sent\":" << (int) landProgressChecksSent[item] << std::endl;
      statefile << "}," << std::endl;
    }
  }
  statefile << "\"Already handled checks\":" << checks::alreadyHandledChecks <<"\n}";
  statefile.close();
}


#endif