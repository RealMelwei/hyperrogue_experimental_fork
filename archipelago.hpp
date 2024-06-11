#ifndef ARCHIPELAGO_HPP
#define ARCHIPELAGO_HPP
#include "hyper.h"
#include <apclient.hpp>
using namespace hr;

namespace ap{

enum class progressCheck {
  notingame=-1,
  locked=0,
  unlocked=1,
  orbunlocked=2,
  orbunlockedglobal=3,
  completed=4
};

// Check array setup
progressCheck landChecksReceived[eItem::ittypes]={progressCheck::notingame};
// Progress like "10 treasures in land X" can already be achieved without having sent "unlocked land X"
progressCheck landProgressChecksSent[eItem::ittypes]={progressCheck::notingame}; 
bool landUnlockCheckSent[eItem::ittypes]={false};

// Utility functions
int getNumberOfProgressedLands(progressCheck prog);
bool isTreasure(eItem item);
int getVirtualTreasureCount(progressCheck prog);

// Initialization
namespace init {
void initRando();
void initLandChecks();
char readApState();
eLand getFirstLand();
}

// Runtime check management
void receiveCheck(int id);
void collectCheck(eItem treasure, progressCheck progress);
void updateChecks();

}

#endif