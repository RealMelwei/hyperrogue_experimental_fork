#include "archipelago.hpp"
#include <apclient.hpp>

using namespace ap;
using namespace hr;

progressCheck landChecksReceived[1000]={progressCheck::locked}; 

//Progress like "10 treasures in land X" can already be achieved without having sent "unlocked land X"
progressCheck landProgressChecksSent[1000]={progressCheck::unlocked}; 
bool landUnlockCheckSent[1000]={false};

void ap::init_landChecks(){
  for(int i=0;i<20;i++){ //Lands Unlocked from Start
    landChecksReceived[i] = progressCheck::unlocked;
    landUnlockCheckSent[i] = true;
  }
  return;
}

void ap::check_collected(eLand l, progressCheck progress){
  addMessage(XLAT("Check unlocked!"));
  return;
}

void ap::update_Checks(){
  for(int i=0; i<eLand::landtypes; i++) {
    eLand l = eLand(i);
    if(!landUnlockCheckSent[i] && landUnlockedLegacy(l)){
      landUnlockCheckSent[i] = true;
      check_collected(l, progressCheck::unlocked);
    }
  }
  return;
}





