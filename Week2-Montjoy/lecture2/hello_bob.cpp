// Author: Rob Montjoy
// Description: Basic String Demo

#include <iostream>
#include <string>

using namespace std;

int main(){
  string bob;
  
  cout << "What is your name? ";
  cin >> bob;
  
  cout << "Hello " + bob << endl;
  
  return 0;
}
