// Author: Paul Talaga  Feb 2016
//
// A demo of sending an array to a function.  It changes the original array!
#include <iostream>

using namespace std;

// It LOOKS like pass by value, meaning we should be able to change bill
// as much as we want, but bill and b below are actually pointers to the
// first element in the array.  Therefore bill is a copy of the
// pointer value, so accessing and changing what bill points to is the
// same array as b below.
// Thus, every time print is called, all the elements in the array b below
// will be incremented by one.
void print(int bill[], int length){
  for(int i = 0; i < length; i++){
    cout << i << ":" << bill[i] << endl;
    bill[i]++;
  }
}

int main(){

  int b[10];
  // Fill it with numbers
  for(int i = 0; i < 10; i++){
    b[i] = i * 2;
  }
  
  cout << "First print" << endl;
  print(b,10);
  
  cout << "Second print" << endl;
  print(b,10);
  
  cout << "Third print" << endl;
  print(b,10);
  
  return 0;
}
