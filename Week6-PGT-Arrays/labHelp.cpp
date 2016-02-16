#include <iostream>
#include <stdlib.h>

using namespace std;

void times100(double a[], unsigned len){
  for(int i = 0; i < len; i++){
    a[i] = a[i] * 100;
  }
}

int main(){
  srand(time(0));

  const unsigned ARR_LEN = 100;

  double array[ARR_LEN];
  for(int i = 0; i < ARR_LEN; i++){
    array[i] = rand() % 100 + rand() % 100 / 100.0;
  }
  
  times100(array, ARR_LEN);
  
  for(int i = 0; i < ARR_LEN; i++){
    cout << i << ":" << array[i] << endl;
  }

}
