#include "archipelago.hpp"
#include <apclient.hpp>

using namespace ap;
using namespace hr;
using namespace nlohmann;

progressCheck landChecksReceived[eItem::ittypes]={progressCheck::notingame}; 

//Progress like "10 treasures in land X" can already be achieved without having sent "unlocked land X"
progressCheck landProgressChecksSent[eItem::ittypes]={progressCheck::notingame}; 
bool landUnlockCheckSent[eItem::ittypes]={false};

void ap::init_rando(){
  std::cout << "Init!" << std::endl;
  init_landChecks();
  return;
}

void ap::init_landChecks(){
  /*for(int i=0; i<eLand::landtypes; i++) { // Lands in game
    eLand l = eLand(i);
    eItem treasure = linf[l].treasure;
    if(isLandIngame(l)){
      landChecksReceived[treasure] = progressCheck::locked;
      landProgressChecksSent[treasure] = progressCheck::unlocked;
    }
  }*/
  read_ap_items();
  return;
}

int ap::number_of_progressed_lands(progressCheck prog){ //prog needs to be at least "unlocked"
  int n=0;
  for(int i=0; i<eItem::ittypes; i++){
    eItem item = eItem(i);
    if(iinf[item].itemclass==IC_TREASURE && landChecksReceived[item]>=prog) n++;
  }
  return n;
}

void ap::receive_check(int id){
  return;
}

void ap::check_collected(eItem treasure, progressCheck progress){
  if(treasure != itHyperstone)
    addMessage(XLAT("Check unlocked!"));
  return;
}

void ap::update_checks(){
  for(int i=0; i<eLand::landtypes; i++) {
    eLand l = eLand(i);
    eItem treasure = linf[l].treasure;
    if(landProgressChecksSent[treasure] != progressCheck::notingame && !landUnlockCheckSent[treasure] && landUnlockedLegacy(l)){
      landUnlockCheckSent[treasure] = true;
      check_collected(treasure, progressCheck::unlocked);
    }
  }
  return;
}

char ap::read_ap_items() {
  std::ifstream i("apstate.json");
  if (i.is_open()) {
    std::ostringstream fullserver;
    json settings;
    i >> settings;
    i.close();
    
    for(int i=0; i<eItem::ittypes; i++){
      eItem item = eItem(i);
      if(iinf[item].itemclass==IC_TREASURE){ //Technically not neccessary, but reduces json accesses
        json::iterator itementry = settings.find(iinf[item].name);
        if(itementry!=settings.end()){
          landChecksReceived[item]=(progressCheck) itementry.value();
        } else {
          landChecksReceived[item]=progressCheck::notingame;
        }
      }
    }
    return 1;
  } else return 0;
}




