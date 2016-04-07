#include <iostream>

using namespace std;

void addOne(int* thing){
  (*thing)++;
}

int main(){
  int* bob = new int;
  int* bill = new int;
  int* mary = new int[10];
  
  cout << *bob << endl;
  
  *bob = 5;
  *bill = 56;
  
  addOne(bob);
  
  //mary[10000] = 100;
  
  cout << *bob << endl;
  
  delete bob;
  delete bill;
  //delete[] mary;
  
  return 0;
}
