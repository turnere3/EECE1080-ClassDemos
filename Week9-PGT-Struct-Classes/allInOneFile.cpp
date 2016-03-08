/*
	Simple non-pointer object demo.
	Paul Talaga
	August 2015
*/

#include <string>
#include <iostream>

using namespace std;

const float SQUARE_FT_IN_ACRE = 43560.0;
const float YEAR_TAX_PER_FT2 = 0.25;

// Interface ------------------------------

// Class to store information about a property able to give the yearly taxes.
class Property{

  public:
  Property();
  Property(string addr);
  Property(string addr, float sqft);
  
  // Setters
  void setAcres(float acres);
  void setSquareFt(float sqft);
  
  // Getters
  string getAddress();
  
  float getAcres();
  float getSquareFt();
  
  float getYearTax();

  private:

  string address;
  float square_foot;  
};

// Implementation -----------------------------------

// Default constructor
Property::Property(){
  address = "Not Set";
  square_foot = -1.0;
}

// Overloaded constructor - set address
Property::Property(string addr){
  address = addr;
  square_foot = -1.0;
}

// Overloaded constructor - set address and size
Property::Property(string addr, float sqft){
  address = addr;
  square_foot = sqft;
}

void Property::setAcres(float acres){
  square_foot = acres * SQUARE_FT_IN_ACRE;
}

void Property::setSquareFt(float sqft){
  square_foot = sqft;
}

string Property::getAddress(){
  return address;
}

float Property::getAcres(){
  return square_foot / SQUARE_FT_IN_ACRE;
}

float Property::getSquareFt(){
  return square_foot;
}

float Property::getYearTax(){
  if(square_foot < 0){
    return 0.0;
  }else{
    return square_foot * YEAR_TAX_PER_FT2;
  };
}

int main(){
  Property a;
  cout << "a address: " << a.getAddress();
  cout << " acres: " << a.getAcres();
  cout << " tax: $" << a.getYearTax() << endl;
  
  Property b("1 Bearcat Way");
  cout << "b address: " << b.getAddress();
  cout << " acres: " << b.getAcres();
  cout << " tax: $" << b.getYearTax() << endl;
  
  Property c("1 Bearcat Way", 5);
  cout << "c address: " << c.getAddress();
  cout << " acres: " << c.getAcres();
  cout << " tax: $" << c.getYearTax() << endl;
}
