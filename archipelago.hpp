#ifndef ARCHIPELAGO_HPP
#define ARCHIPELAGO_HPP
#include "hyper.h"
#include <apclient.hpp>
using namespace hr;

namespace ap{
enum class progressCheck {
  locked=0,
  unlocked=1,
  orbunlocked=2,
  orbunlockedglobal=3,
  completed=4
};
void init_landChecks();
void check_collected(eLand l, progressCheck progress);
void update_Checks();
}

#endif