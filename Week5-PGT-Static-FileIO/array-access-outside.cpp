// Author: Paul Talaga  Feb 2016
//
// A demo of accessing and changing values outside an array.
#include <iostream>

using namespace std;



int main(){
  int a[10] = {};
  
  // Print the array correctly - all zero due to {}
  for(int i = 0; i < 10; i++){
    cout << i << ":" << a[i] << endl;
  }
  
  // Go longer - should get garbage values after index 9
  for(int i = 0; i < 20; i++){
    cout << i << ":" << a[i] << endl;
  }
  
  // Now change the values outside our array
  for(int i = 0; i < 20; i++){
    //a[i] = 0;  // Uncomment this to segfault your program
  }
  // This crashes becaue we are writing to areas of the stack which are neccessary
  // for the program to operate.
  // If we read or write very far outside our current addresses, we may also
  // segfault for accessing memory not allocated to our program.
  
  return 0;
}
