#include "vex.h"
#include "autonFunctions.h"
#include "universalFunctions.h"

using namespace vex;

void auton1(){
  double speed = 50;
  gpsDrive(-1482,878, speed);
  gpsDrive(-900,1482, speed);
  gpsDrive(933,1482, speed);
  gpsDrive(933,275, speed);
  gpsDrive(-900,275, speed);
  gpsDrive(-1482,878, speed);
}



void autonCaller()
{
  auton1();
}