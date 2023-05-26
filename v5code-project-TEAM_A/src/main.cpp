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
// Drivetrain           drivetrain    1, 3, 6, 2, 11  
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "autonFunctions.h"
#include "driverFunctions.h"
#include "universalFunctions.h"
#include "vex.h"

using namespace vex;

competition Competition;

void init() {

  vexcodeInit();

  DrivetrainGPS.calibrate();
  // Inertial.startCalibration(2000);

  task::sleep(2100);
}

void auton() { 
  autonCaller(); 
}

void usercontrol() { driver(); }

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  init();

  Competition.autonomous(auton);
  Competition.drivercontrol(usercontrol);
  auton();
}
