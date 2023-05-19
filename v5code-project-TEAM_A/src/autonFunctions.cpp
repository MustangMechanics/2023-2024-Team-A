#include "vex.h"
#include "universalFunctions.h"
#include "driverFunctions.h"


void gpsDrive(double x,double y,double speed){
  double originlHeading;
  double originX;
  double originY;
  double deltaX = x - originX;
  double deltaY = y - originY;
  double deltaHeading = atan(deltaY/deltaX);
  double newHeading = originlHeading - deltaHeading;
  double hyp = sqrt(deltaX * deltaX + deltaY * deltaY);
  
  drivetrain.setHeading(newHeading, speed);

}