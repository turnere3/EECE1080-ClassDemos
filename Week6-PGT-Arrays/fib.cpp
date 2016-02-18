#include <iostream>
#include <stdlib.h>

using namespace std;

int fib(int i){
  int a = 0;
  cout << "i: " << i << endl;
  return fib(i+1);
}

int main(){
  
  fib(0);
  
  /*for(int i = 0; i < 10; i++){
    cout << i << ":" << fib(i) << endl;
  } */

}
