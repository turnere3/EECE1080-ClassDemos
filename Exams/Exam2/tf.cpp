#include <iostream>

using namespace std;

int main(){
  int  array_a[50] = {1},  array_b[50];

  array_b = array_a;

  cout << array_b[0];
}
