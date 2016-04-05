#include <iostream>

using namespace std;

int main(){
  int bob = 5;
  int bill = 10;
  
  void* b = &bob;
  void* c = &bob;
  *(int*)b = 45;
  *(int*)b = 67;
  c = &bill;
  b = c;
  *(int*)b = 89;
  
  cout << b << endl;
  // bob = 45;  //NONONO
  
  cout << bob << endl;
}
