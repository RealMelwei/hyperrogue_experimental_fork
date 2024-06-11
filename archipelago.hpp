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
int number_of_progressed_lands(progressCheck prog);
bool isTreasure(eItem item);
int virtualtreasure(progressCheck prog);

// Initialization
namespace init {
void init_rando();
void init_landChecks();
char read_ap_items();
eLand get_first_land();
}

// Runtime check management
void receive_check(int id);
void check_collected(eItem treasure, progressCheck progress);
void update_checks();

}

#endif