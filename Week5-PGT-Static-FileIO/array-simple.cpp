// Author: Paul Talaga  Feb 2016
//
// A simple demo of declaring, initializing, filling, and printing an array.

#include <iostream>

using namespace std;



int main(){
  int a = 4;
  
  // b is an array that can hold 10 integers.
  int b[10];
  
  // c is an array that can hold 5 integers and we prefill it with values.
  int c[5] = {1,2,3,4+a,a};
  
  // d is an array that can hold 5 integers and we fill the first value with 1
  // The rest get filled with 0.
  int d[5] = {1};
  
  // e is an array that can hold 5 integers and we fill it with no values,
  // so it will be filled with all 0s.
  int e[5] = {};
  
  // Partially fill b with values.
  for(int i = 0; i < 5; i++){
    b[i] = i * 2;
  }
  
  // Print b
  cout << "b array" << endl;
  for(int i = 0; i < 10; i++){
    cout << i << ":" << b[i] << endl;
  }
  
  // Print c
  cout << endl << "c array" << endl;
  for(int i = 0; i < 5; i++){
    cout << i << ":" << c[i] << endl;
  }
  
  // Print d
  cout << endl << "d array" << endl;
  for(int i = 0; i < 5; i++){
    cout << i << ":" << d[i] << endl;
  }
  
  // Print e
  cout << endl << "e array" << endl;
  for(int i = 0; i < 5; i++){
    cout << i << ":" << e[i] << endl;
  }
}
