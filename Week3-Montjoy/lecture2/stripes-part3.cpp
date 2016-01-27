// Author: Rob Montjoy
// Source: stripes-part2.cpp
// Description: Produces alternating stripes on the screen

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
  int stripes;
  int height_of_stripe;
  int width_of_stripe;
  int w;
  int h;
  char even_brush_code;
  char odd_brush_code;

  srand(time(0));
  
  even_brush_code = '0' + rand()%10;
  
  odd_brush_code = 48 + rand()%10;
  while(odd_brush_code == even_brush_code){
    odd_brush_code = 48 + rand()%10;
  } 
  cout << "Welcome to the Stripes Generator" << endl;
  cout << "How many stripes do you want to generate? ";
  cin >> stripes;
  cout << "What is the width of each stripe? ";
  cin >> width_of_stripe;
  cout << "What is the height of each stripe? ";
  cin >> height_of_stripe;
  /*
  cout << "What character should we use for even stripes? ";
  cin >> even_brush_code;
  cout << "What character should we use for odd stripes? ";
  cin >> odd_brush_code;
  */
  for( int s = 1; s <= stripes ; s++){
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

