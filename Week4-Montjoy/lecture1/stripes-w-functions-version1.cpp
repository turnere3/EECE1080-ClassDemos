// Author: Rob Montjoy
// Source: stripes-with-functions-version1.cpp
// Description: Produces alternating stripes on the screen

#include <iostream>
#include <cstdlib>
#include <cctype>

using namespace std;

int isEven(int even_or_not){
}


int main(){

  int w;
  int h;
  int number_of_stripes;
  int height_of_stripe;
  int width_of_stripe;

  char even_brush_code = 'A';
  char odd_brush_code = 'C';

  srand(time(0));
  
  cout << "Welcome to the Stripes Generator" << endl;
  cout << "How many stripes do you want to generate? ";
  cin >> number_of_stripes;
  cout << "What is the width of each stripe? ";
  cin >> width_of_stripe;
  cout << "What is the height of each stripe? ";
  cin >> height_of_stripe;

  for( int s = 1; s <= number_of_stripes ; s++){
    for( h = 1; h <= height_of_stripe; h++){
      for ( w = 1; w <= width_of_stripe; w++){

        if((s % 2) == 0){
          cout << even_brush_code;
        }else{
          cout << odd_brush_code;
        }

      }
      cout << endl;
    }
  }

  return 0;
}

