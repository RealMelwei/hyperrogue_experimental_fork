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
void init_rando();
void init_landChecks();
int number_of_progressed_lands(progressCheck prog);
void receive_check(int id);
void check_collected(eItem treasure, progressCheck progress);
void update_checks();
char read_ap_items();
bool isTreasure(eItem item);
}

#endif