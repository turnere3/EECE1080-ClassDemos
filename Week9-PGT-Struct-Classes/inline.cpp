/*
	Simple non-pointerobject demo with object implemented in-line.
	Paul Talaga
	August 2015
*/

#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

const float SQUARE_FT_IN_ACRE = 43560.0;
const float YEAR_TAX_PER_FT2 = 0.25;

// Interface ------------------------------

// Class to store information about a property able to give the yearly taxes.
class Property{

  public:
  Property(){
    address = "Not Set";
    square_foot = -1.0;
  } 
  
  Property(string addr){
    address = addr;
    square_foot = -1.0;
  }
  
  Property(string addr, float sqft){
    address = addr;
    square_foot = sqft;
  }
  
  ~Property(){   // Destructor
    
  }
  
  // Setters
  void setAcres(float acres){
    square_foot = acres * SQUARE_FT_IN_ACRE;
  }
  
  void setSquareFt(float sqft){
    square_foot = sqft;
  }
  
  // Getters
  string getAddress(){
    return address;
  }
  
  float getAcres(){
    return square_foot / SQUARE_FT_IN_ACRE;
  }
  
  float getSquareFt(){
    return square_foot;
  }
  
  float getYearTax(){
    if(square_foot < 0){
      return 0.0;
    }else{
      return square_foot * YEAR_TAX_PER_FT2;
    };
  }
  
  void clone(Property other){
    address = other.address;
    square_foot = other.square_foot;
  }

  private:

 // Property();
  string address;
  float square_foot;  
};

int main(){

  int* bob = new int;
  Property a;
  cout << "a address: " << a.getAddress();
  cout << " acres: " << a.getAcres();
  cout << " tax: $" << a.getYearTax() << endl;
  
  return 0;
  
  Property b("1 Bearcat Way");
  cout << "b address: " << b.getAddress();
  cout << " acres: " << b.getAcres();
  cout << " tax: $" << b.getYearTax() << endl;
  
  Property c("1 Bearcat Way", 5);
  cout << "c address: " << c.getAddress();
  cout << " acres: " << c.getAcres();
  cout << " tax: $" << c.getYearTax() << endl;
  
  a.clone(b);
  
  cout << "a address: " << a.getAddress();
  cout << " acres: " << a.getAcres();
  cout << " tax: $" << a.getYearTax() << endl;
  
  cout << "b address: " << b.getAddress();
  cout << " acres: " << b.getAcres();
  cout << " tax: $" << b.getYearTax() << endl;
  return 0;
  
  Property* e = new Property;
  cout << e->getAddress(); 
}
