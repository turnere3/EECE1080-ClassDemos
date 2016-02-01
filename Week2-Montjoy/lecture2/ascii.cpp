// Author: Rob Montjoy
// Source: ascii.cpp
// Description: Display a basic ASCII table
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  char character = ' ';
  cout << setw(8) << "Integer" << setw(8) << "ASCII" << endl;
  while(character <= 127){ // 127 == ~ character
    cout << setw(8) << (int)character 
         << setw(8) << character
         << endl;
    character++; 
  }
  return 0;
}
