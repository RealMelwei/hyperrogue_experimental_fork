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

#define HYPERROGUE_BASE_ID 0XCBA000
eItem itemByID[0X60]={eItem::itNone};

// Check array setup
progressCheck landChecksReceived[eItem::ittypes]={progressCheck::locked};
// Progress like "10 treasures in land X" can already be achieved without having sent "unlocked land X"
progressCheck landProgressChecksSent[eItem::ittypes]; 
bool landUnlockCheckSent[eItem::ittypes]={false};

// Utility functions
int getNumberOfProgressedLands(progressCheck prog);
bool isTreasure(eItem item);
int getVirtualTreasureCount(progressCheck prog);
eItem getItemByName(std::string name);
int getLocationID(eItem treas, progressCheck prog);

// Initialization
namespace init {
  bool initialRestartDone = false;
  void initRando();
  eLand getFirstLand();
  void initItemByID();
}

// Check management
namespace checks{
  int alreadyHandledChecks = -1;
  void resetInventory();
  void receiveCheck(APClient::NetworkItem item);
  void collectCheck(eItem treasure, progressCheck progress);
  void updateChecks();
  void doFullSync();
}

namespace saves{
  void writeApState(std::string fileName);
  void readApState(std::string fileName);
}
}
#endif