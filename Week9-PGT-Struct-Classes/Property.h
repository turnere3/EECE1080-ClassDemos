#ifndef PROPERTY_H
#define PROPERTY_h

/*
	Simple non-pointer object demo Property interface file.
	Paul Talaga
	August 2015
*/

#include <string>

using namespace std;

// Class to store information about a property able to give the yearly taxes.
class Property{

  public:
  Property();
  Property(string addr);
  Property(string addr, float sqft);
  
  ~Property();
   
  // Setters
  void setAcres(float acres);
  void setSquareFt(float sqft);
  
  // Getters
  string getAddress();
  
  float getAcres();
  float getSquareFt();
  
  float getYearTax();
  
  int getPropertyCount();

  private:

  string address;
  float* square_foot; 
  
  static int property_count; 
};


#endif
