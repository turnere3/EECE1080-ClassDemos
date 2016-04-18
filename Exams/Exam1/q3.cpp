
#include <iostream>
using namespace std;
 
int f(int x, int y, int z){
  if (x < y){
    return z + x;
  }
  return 3*z;
}
 
int main(){
  int a = 1;
  int b = 3;
  int c = 4;
  int d = 10;
 
  d = f(c, a, b); 
  cout << d << endl;

  return 0;
}

