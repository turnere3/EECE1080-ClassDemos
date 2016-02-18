#include <iostream>
#include <stdlib.h>

using namespace std;

int add(int a, int b){
  return a + b;
}

void add(int a[], unsigned a_len, 
         int b[], unsigned b_len,
         int c[], unsigned c_len){
  for(unsigned i = 0; i < min(min(a_len,b_len), c_len);i++){
    c[i] = a[i] + b[i];
    //cout << "a[" <<i <<"]" << a[i] << endl;
  }
  return;         
}

int main(){
 
  int third[100] = {100,101,102,103,104}; 
  int first[] = {1,2,3,4};
  int number = 9999;
  int second[] = {11,22,33,44};
  
  
  cout << add(5,6) << endl;
  
  add(first, 4, second, 4, third, 100);
  
  for(int i = 0; i < 40; i++){
    cout << i << ":" << third[i] << endl;
  }

}
