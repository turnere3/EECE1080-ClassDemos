#include <iostream>

using namespace std;

int main(){

  /*int* bob = NULL;
  
  //cout << *bob << endl;
  //return 0;
  
  for(unsigned i = 0; i < 100000000; i++){
     bob = new int;
     *bob = 45;
     delete bob;
     bob = NULL;
     //cout << *bob << endl;
  }
  //*bob = 5;
  
  
  cout << *bob << "-" << bob << endl;
  */
  
  /*
  int* bob;
  int x = 5;
  bob = &x;
  
  */
  
  /*
  int x = 5;
  int** bob = new int*;
  *bob = &x;

  cout << x << "-" << *bob << "-" << **bob << endl;
  
  */
  
  /*
  int** bob = new int*;
  *bob = new int;
  **bob = 94;
  
  cout << **bob << endl;
  
  */
  
  void** bob = new void*;
  *bob = (void*)(new int);
  
  *(int*)(*bob) = 5;
  
  return 0;
}
