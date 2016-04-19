#include <iostream>

using namespace std;

int main(){
  int a = 0;
  for( int n = 1; n <= 3; n++) {
    for( int m = n-1; m < 2 * n; ++m){
       a += 1;
     }
  }
  cout << a << endl;
}

