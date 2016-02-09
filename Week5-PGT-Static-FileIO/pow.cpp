#include <iostream>
#include <cmath>

using namespace std;

int pow(int base, int exponent){
  // Handle negative exponents
  if( exponent < 0 ){
    return 0;
  }
  int product = 1;
  for(int i = 1; i <= exponent; i++){
    product = product * base;
  }
  return product;
}

int main(){
  
  cout << pow(0, 100) << endl;
  cout << pow(45, 0) << endl;
  cout << pow(3, -4) << endl;
  cout << pow(-4, 4) << endl;
  cout << pow(-1, 1) << endl;
  cout << pow(2, 2) << endl;
  //cout << add(5,6) << endl;
  //cout << add(10,12) << endl;
  
  return 0;
}
