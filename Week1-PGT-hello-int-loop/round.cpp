#include <iostream>

using namespace std;

int main(){
  // This is a one line comment
  float a = 12;
  
  float b = a * 15L / 4.26789 * 18000 / a;
  float c =  1/4.26789 * 15 * 18000;
  cout << "b: " << b << " c: " << c << endl;
  // This shouldn't work, but it does.
  if(b == c){ // never do == with floats
    cout << "the same!\n";
  }else{
    cout << "not the same!\n";
  }
  return 0;
}
