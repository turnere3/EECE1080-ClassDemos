#include <iostream>
#include <string>
#include <cstring>

using namespace std;


int main(){
  string bob("This is bob's sentence.");

  int a[256] = {1,2,3,4};
  char c_bob[256] = "This\n";
  
  cout << bob << endl;
  cout << c_bob << endl;

  
  return 0;
}
