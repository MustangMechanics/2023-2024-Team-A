#include "vex.h"
#include "universalFunctions.h"
#include "driverFunctions.h"


void gpsDrive(double x,double y){
  double originlHeading = DrivetrainGPS.heading();
  double originX = DrivetrainGPS.xPosition(mm);
  double originY = DrivetrainGPS.yPosition(mm);
  double deltaX = x - originX;
  double deltaY = y - originY;
  double deltaHeading = atan(deltaY/deltaX);
  double newHeading = originlHeading + deltaHeading;
  double hyp = sqrt(deltaX * deltaX + deltaY * deltaY);
  //double hypInches = hyp * 0.0393701;

  Drivetrain.turnToHeading(newHeading, degrees, 10); 
  Drivetrain.setDriveVelocity(10, percent); 
  Drivetrain.driveFor(forward, -hyp, mm); 
}
