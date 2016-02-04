// Author: Rob Montjoy
// Source: stripes-with-functions-version1.cpp
// Description: Produces alternating stripes on the screen

#include <iostream>
#include <cstdlib>
#include <cctype>

using namespace std;

int isEven(int even_or_not){

  if((even_or_not % 2) == 0){
    return 1;
  }
    
  return 0;
}

int isOdd(int odd_or_not){

  if((odd_or_not % 2) != 0){
    return 1;
  }
    
  return 0;
}

void displayStripes(int number_of_stripes, int height_of_stripe,
  int width_of_stripe, char even_brush_code, char odd_brush_code);


void getBrushCode(char &even_brush_code, char &odd_brush_code);
  
int main(){
  int number_of_stripes;
  int height_of_stripe;
  int width_of_stripe;

  char even_brush_code = 'A';
  char odd_brush_code = 'C';

  cout << "Welcome to the Stripes Generator" << endl;
  cout << "How many stripes do you want to generate? ";
  cin >> number_of_stripes;
  cout << "What is the width of each stripe? ";
  cin >> width_of_stripe;
  cout << "What is the height of each stripe? ";
  cin >> height_of_stripe;

  getBrushCode(even_brush_code, odd_brush_code);

  displayStripes(number_of_stripes, height_of_stripe,
    width_of_stripe,  even_brush_code, odd_brush_code);

  return 0;
}

void displayStripes(int number_of_stripes, int height_of_stripe,
  int width_of_stripe, char even_brush_code, char odd_brush_code){
  
  int w, h;
  
  for( int stripe = 1; stripe <= number_of_stripes ; stripe++){
    for( h = 1; h <= height_of_stripe; h++){
      for ( w = 1; w <= width_of_stripe; w++){

        if(isEven(stripe)){
          cout << even_brush_code;
        }else{
          cout << odd_brush_code;
        }

      }
      cout << endl;
    }
  }
}



void getBrushCode(char &even_brush_code, char &odd_brush_code){

  char answer;
  cout << "Do you want to choose a brush code? y/n ";
  cin >> answer;
  if(tolower(answer) == 'n'){
    even_brush_code = 'a' + rand()%26;
    //odd_brush_code = 'a' + rand()%26;
    //while(odd_brush_code == even_brush_code){
      //odd_brush_code = 'a' + rand()%26;
    //}
    for(odd_brush_code = 'a' + rand()%26; odd_brush_code == even_brush_code; odd_brush_code = 'a' + rand()%26 ) 
		;

  }else{
    cout << "What character should we use for even stripes? ";
    cin >> even_brush_code;
    cout << "What character should we use for odd stripes? ";
    cin >> odd_brush_code;
  }
}
