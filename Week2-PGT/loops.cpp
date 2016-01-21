#include <iostream>
#include <stdlib.h>

using namespace std;

bool bob(){
  cout << "Bob was here\n";
  return false;
}

bool bill(){
  cout << "Bill was here\n";
  return false;
}

int main(){
  
  int i = 0;
  // No idea how many times I want to loop
  /*
  while(i < 10){
    cout << "i: " << i << endl;
    i++;
  }
  
  i = 0;
    // No idea how many times I want it to loop, but at least once.
  do{
    cout << "do while i:" << i << endl;
  }while(i < -5);
  */
  
  // I know how many times i want to loop
  for(int j = 0 ; !(bob() && bill()) ; j++){
    cout << "j:" << j << endl;
  } 

  
  

  
  return 0; 
}




