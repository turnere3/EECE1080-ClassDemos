#include <iostream>
#include <string>

using namespace std;

void mysize(double arr[]){
  cout << "size: " << sizeof(arr) << endl;
  cout << arr[4] << endl;
}

int main(){

  double a[] = {11,22,33,44,55};
  int b = 99;
  string c[20];
  int e[0];
  
  c[0] = "bob";
  c[1] = "carrots";
  c[2] = "pirates";
  a[4] = b;
  cout << "a:" << sizeof(a) << endl;
  cout << "b:" << sizeof(b) << endl;
  cout << "c:" << sizeof(c) << endl;
  cout << "e:" << sizeof(e) << endl;
  cout << "-" << c[0] << "-" << endl;
  mysize(a);
}
