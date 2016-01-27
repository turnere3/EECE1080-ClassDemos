// Author: Rob Montjoy
// Source: square.cpp
// Description: Display a square on the screen

#include <iostream>

using namespace std;

int main(){

  int size;
  int w;
  int h;

  cout << "Welcome to Square Generator" << endl;
  cout << "Enter the size of your square: ";
  cin >> size;

  for( h = 1; h <= size; h++){
    for( w = 1; w <= size; w++){
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}

