/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       symphony                                                  */
/*    Created:      Fri Nov 25 2022                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
#include "driverFunctions.h"
#include "autonFunctions.h"
#include "universalFunctions.h"

using namespace vex;

competition Competition;

void init()
{

  vexcodeInit();

  //Inertial.startCalibration(2000);
  
  task::sleep(2100);

}

void auton()
{
  autonCaller();
}


void usercontrol()
{
  driver();
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  init();  

  Competition.autonomous(auton);
  Competition.drivercontrol(usercontrol);
  //auton();
  
}
