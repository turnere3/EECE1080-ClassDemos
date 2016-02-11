// Author: Paul Talaga  Feb 2016
//
// A demo of the static keyword for variables in functions.

#include <iostream>
#include <cmath>

using namespace std;

//int c = 10;

int add(int a, int b){
  static int c = 10;  // c 'sticks' between function calls
  c = c + 1;
  cout << "c: " << c << endl;
  return a + b + c;
}

int main(){
  
  cout << add(5,6) << endl;
  cout << add(10,12) << endl;
  cout << add(10,12) << endl;
  cout << add(10,12) << endl;
  cout << add(10,12) << endl;
  cout << add(10,12) << endl;
  cout << add(10,12) << endl;
  //cout << c << endl;
  return 0;
}
