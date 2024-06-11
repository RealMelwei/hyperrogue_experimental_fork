#ifndef ARCHIPELAGO_CPP
#define ARCHIPELAGO_CPP
#include "archipelago.hpp"
#include <apclient.hpp>
#include <string>
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

/*
RANDOMIZER INITIALIZATION
*/

void ap::init::initRando(){
  std::cout << "Init!" << std::endl;
  init::initLandChecks();
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
          ap::landChecksReceived[item]=(progressCheck) itementry.value();
        } else {
          ap::landChecksReceived[item]=progressCheck::notingame;
        }
      }
    }
    return 1;
  } else return 0;
}

eLand ap::init::getFirstLand(){
  std::ifstream i("apsettings.json");
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

void ap::receiveCheck(int id){
  return;
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


#endif