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



class HyperrogueDataPackageStore : public APDataPackageStore {
  //~APDataPackageStore() {};
  bool load(const std::string& game, const std::string& checksum, json& data);
  bool save(const std::string& game, const json& data);
};

#define HYPERROGUE_BASE_ID 0XCBA000
eItem itembyid[0X60]={eItem::itNone};

// Check array setup
progressCheck landChecksReceived[eItem::ittypes]={progressCheck::notingame};
// Progress like "10 treasures in land X" can already be achieved without having sent "unlocked land X"
progressCheck landProgressChecksSent[eItem::ittypes]={progressCheck::notingame}; 
bool landUnlockCheckSent[eItem::ittypes]={false};

// Utility functions
int getNumberOfProgressedLands(progressCheck prog);
bool isTreasure(eItem item);
int getVirtualTreasureCount(progressCheck prog);
eItem getItemByName(std::string name);

// Initialization
namespace init {
void initRando();
void initLandChecks();
char readApState();
eLand getFirstLand();
void init_itembyid();
}

// Runtime check management
void receiveCheck(APClient::NetworkItem item);
void collectCheck(eItem treasure, progressCheck progress);
void updateChecks();
void WriteApState();
}

#endif