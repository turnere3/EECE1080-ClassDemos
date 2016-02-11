// Author: Paul Talaga  Feb 2016
//
// A demo of array/pointer arithmetic.
#include <iostream>

using namespace std;

void print(int bill[], int length, int offset){
  // Since bill is really a pointer to the first element, if we add some value to
  // it, we are changing where the pointer is pointing.  Arrays elements are 
  // adjacent in memory, so offset will go down offset number of elements in 
  // the array.
  bill = bill + offset;
  for(int i = 0; i < length; i++){
    cout << i << ":" << bill[i] << endl;
  }
}


int main(){

 int b[10];
  // Fill it with numbers
  for(int i = 0; i < 10; i++){
    b[i] = i * 2;
  }
  
  cout << "First print" << endl;
  print(b, 10, 0);
  
  cout << "Second print" << endl;
  print(b, 10, 1);
  
  cout << "Third print" << endl;
  print(b, 10, 3);
  
  return 0;
}
