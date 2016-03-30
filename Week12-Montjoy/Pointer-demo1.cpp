// Pointers.cpp

#include <iostream>
#include <ctime>

using namespace std;

int main(){

  unsigned char k = 66;
  int a;
  short int b;

  int *iPtr;
  short int *sPtr;
  unsigned char *cPtr;

  cPtr = &k;

  cout << (unsigned int*)cPtr << endl;

  cout << "Size of int " << sizeof(int) << endl;
  cout << "Size of int pointer " << sizeof(iPtr) << endl;

  cout << "Size of char " << sizeof(char) << endl;
  cout << "Size of char pointer " << sizeof(char*) << endl;

  cout << "k = " << k << " cPtr = " << (char)*cPtr << endl;
 

  k = 69; 
  cout << "k = " << k << " cPtr = " << (char)*cPtr << endl;

  cPtr++;
  cout << "k = " << k << " cPtr = " << (char)*cPtr << endl;

  cPtr--;
  cout << "k = " << k << " cPtr = " << (char)*cPtr << endl;

    cPtr += 1000000;
    cout << "k = " << k << " cPtr = " << (char)*cPtr << endl;
}   

