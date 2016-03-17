#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


const double PI = atan(1.0)*4;
const double FEET_PER_MILE =  5280;
const double INCHES_PER_FOOT =  12;
const double INCHES_PER_MILE = FEET_PER_MILE*INCHES_PER_FOOT;
const double MINUTES_PER_HOUR = 60;
const double SECONDS_PER_MINUTE = 60;
const double DEFAULT_TIRE_SIZE = 15;

class Wheel {
public:
  Wheel(){
    rpm  = speed = radius = 0;
    setRadius(DEFAULT_TIRE_SIZE);
  }

  Wheel(double in_radius){
    rpm  = speed = radius = 0;
    setRadius(in_radius);
  }

  //time in MPH
  // Give a wheel radius and a vehicle speed in MPH.
  Wheel(double in_radius, double in_speed){
    setRadius(in_radius);
    setSpeed(in_speed);
  }

  void setRPM(double in_revolutions, double in_time){
    if(in_time > 0){
      rpm = (in_revolutions/in_time)*SECONDS_PER_MINUTE;
      calcSpeed();
    }
  }

  //time in seconds
  // Set a wheel radius and a speed in MPH.
  void setSpeed(double in_speed){
    speed = in_speed;
    if(radius > 0){
      rpm  = speed*INCHES_PER_MILE/(getCircumference()*MINUTES_PER_HOUR);
    }
  }

  // Get the wheel radius.
  double getRadius(){
    return radius;
  }

  // Get the wheel diameter.
  double getDiameter(){
    return 2*radius;
  }

  // Get the wheel's circumfrence.
  double getCircumference(){
    return 2*PI*radius;
  }

  // Get the wheel's circumfrence.
  double getSurfaceArea(){
    return PI*radius*radius;
  }

  // Get the vehicle's speed in MPH.
  double getSpeed(){
    calcSpeed();
    return speed;
  }

  // Get the vehicle wheel's RPM.
  double getRPM(){
    return rpm;
  }

  void displayParameters(){
    cout << "Wheel Radius: " << radius << endl;
    cout << "Speed: " << speed << " MPH" << endl;
    cout << "Wheel Circumference: " << getCircumference() << " inches" << endl;
    cout << "Wheel Spin Rate: " << rpm << " RPM" << endl;
    cout << endl;
  }

private:
  void calcSpeed(){
   // in inches
    double dist_in_one_hour = getCircumference()*rpm*MINUTES_PER_HOUR; 
   
    speed = dist_in_one_hour/INCHES_PER_MILE;
  }
  // Set the wheel radius.
  void setRadius(double in_radius){
    radius = 0;
    if(in_radius > 0) radius  = in_radius;
  }
  double radius;   // radius inches
  double speed;   // MPH
  double rpm;   // RPM

};

