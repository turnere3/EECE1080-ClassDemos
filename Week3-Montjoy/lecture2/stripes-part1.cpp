// Author: Rob Montjoy
// Source: stripes-part1.cpp
// Description: Produces alternating stripes on the screen

#include <iostream>

using namespace std;

int main(){
  int stripes;
  int height_of_stripe;
  int width_of_stripe;
  int w;
  int h;

  cout << "Welcome to the Stripes Generator" << endl;
  cout << "How many stripes do you want to generate? ";
  cin >> stripes;
  cout << "What is the width of each stripe? ";
  cin >> width_of_stripe;
  cout << "What is the height of each stripe? ";
  cin >> height_of_stripe;

  for( int s = 1; s <= stripes ; s++){
    for( h = 1; h <= height_of_stripe; h++){
      for ( w = 1; w <= width_of_stripe; w++){
        if((s % 2) == 0){
          cout << "*";
        }else{
          cout << "=";
        }
      }
      cout << endl;
    }
  }
  return 0;
}

