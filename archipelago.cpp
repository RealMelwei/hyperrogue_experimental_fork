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
    init::initLandChecks();
    init::init_itembyid();
    connect_ap(APClient::DEFAULT_URI, "melwei");
  }
  return;
}

void ap::init::initLandChecks(){
  init::readApState();
  return;
}

char ap::init::readApState() {
  std::ifstream i("apstate.json");
  if (i.is_open()) {
    std::ostringstream fullserver;
    json state;
    i >> state;
    i.close();
    
    for(int i=0; i<eItem::ittypes; i++){
      eItem item = eItem(i);
      if(isTreasure(item)){ //Technically not neccessary, but reduces json accesses
        json::iterator itementry = state.find(iinf[item].name);
        if(itementry!=state.end()){
          landChecksReceived[item]=(progressCheck) itementry.value();
        } else {
          landChecksReceived[item]=progressCheck::notingame;
        }
      }
    }
    return 1;
  } else return 0;
}

eLand ap::init::getFirstLand(){
  std::ifstream i("apworldsettings.json");
  if (i.is_open()) {
    std::ostringstream fullserver;
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
RANDOMIZER RUNTIME
*/

void ap::receiveCheck(APClient::NetworkItem netitem){
  eItem item = itembyid[netitem.item - HYPERROGUE_BASE_ID];
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
    return;
  default:
    return;
  }
  WriteApState();
}

void ap::collectCheck(eItem treasure, progressCheck progress){
  if(treasure != itHyperstone)
    addMessage(XLAT("Check unlocked!"));
  return;
}

void ap::updateChecks(){
  for(int i=0; i<eLand::landtypes; i++) {
    eLand l = eLand(i);
    eItem treasure = linf[l].treasure;
    if(ap::landProgressChecksSent[treasure] != progressCheck::notingame && !ap::landUnlockCheckSent[treasure] && landUnlockedLegacy(l)){
      ap::landUnlockCheckSent[treasure] = true;
      collectCheck(treasure, progressCheck::unlocked);
    }
  }
  return;
}

void ap::WriteApState(){
  std::ofstream statefile;
  statefile.open ("apstate.json");
  statefile << "{" << std::endl;
  for(int i=0; i<eItem::ittypes; i++){
    eItem item = eItem(i);
    if(isTreasure(item)) statefile << iinf[item].name << ": " << (int) landChecksReceived[item] << "," << std::endl;
  }
  statefile << "}";
  statefile.close();
}

#endif