#include <iostream>
#include <stdlib.h>

using namespace std;

void print(int* a, unsigned len){
  cout << a[100] << endl;
  cout << a << endl;
  cout << *(a + 100) << endl;
  cout << a << endl;
  print(a, len);
}

int main(){
 

  int array[] = {12, 7, 19, 22, -30};
  print(array, 5);
  
  /*int* b;
  int c = 55;
  b = &c;
  cout << c << endl;
  cout << b << endl;
  cout << *b << endl;
  
  c++;
  (*b)++;
  
  cout << c << endl;
  cout << b << endl;
  cout << *b << endl; */
  

}
