// Author: Rob Montjoy
// Description: Basic String Demo

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(){
  string random_string;
  
  srand(time(0));
  for(int i = 0; i < rand()%10; i++){
    random_string +=  ' ' + rand() % 70; 
  }
  cout << random_string << endl;
  
  return 0;
}
