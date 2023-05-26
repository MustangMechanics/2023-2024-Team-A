#include "vex.h"
#include "autonFunctions.h"
#include "universalFunctions.h"

using namespace vex;



void auton1(){
  gpsDrive(-1482,878);
  gpsDrive(-900,1482);
  gpsDrive(933,1482);
  gpsDrive(933,275);
  gpsDrive(-900,275);
  gpsDrive(-1482,878);
}

void auton2(){
  Drivetrain.setHeading(90, degrees); 
  Drivetrain.setDriveVelocity(20, percent); 
  Drivetrain.driveFor(forward, 5, inches); 
  Drivetrain.turnToHeading(1, degrees); 
  Drivetrain.driveFor(forward, 5, inches); 
  Drivetrain.turnToHeading(180, degrees); 
  Drivetrain.driveFor(forward, 5, inches); 
}


void autonCaller()
{
  //auton1();
  auton2();
}