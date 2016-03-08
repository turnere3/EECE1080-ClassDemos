/*
	Simple non-pointer object demo - Property implementation file.
	Paul Talaga
	August 2015
*/

#include <string>

#include "Property.h"

using namespace std;

const float SQUARE_FT_IN_ACRE = 43560.0;
const float YEAR_TAX_PER_FT2 = 0.25;

// Default constructor
Property::Property(){
  address = "Not Set";
  square_foot = new float(-1.0);
  property_count++;
}

// Overloaded constructor - set address
Property::Property(string addr){
  address = addr;
  square_foot = new float(-1.0);
  property_count++;
}

// Overloaded constructor - set address and size
Property::Property(string addr, float sqft){
  address = addr;
  square_foot = new float(sqft);
  property_count++;
}

Property::~Property(){
  delete square_foot;
  property_count--;
}

void Property::setAcres(float acres){
  *square_foot = acres * SQUARE_FT_IN_ACRE;
}


void Property::setSquareFt(float sqft){
  *square_foot = sqft;
}

string Property::getAddress(){
  return address;
}

float Property::getAcres(){
  return *square_foot / SQUARE_FT_IN_ACRE;
}

float Property::getSquareFt(){
  return *square_foot;
}

float Property::getYearTax(){
  if(*square_foot < 0){
    return 0.0;
  }else{
    return *square_foot * YEAR_TAX_PER_FT2;
  };
}

int Property::getPropertyCount(){
  return property_count;
}

int Property::property_count = 0;
