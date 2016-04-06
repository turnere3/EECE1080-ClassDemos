#include <iostream>

using namespace std;

int main(){

  int** bob = new int*;
  
  //int x = 5;
  
  //*bob = &x;
  
  //*bob = 50;
  
  *bob = new int;
  
  **bob = 50;

  cout << **bob << "-" << *bob << "-" << bob <<endl;
  
  delete bob;
  bob = NULL;
  cout << bob << endl;
  delete *bob;
  //delete bob;

  return 0;
}
