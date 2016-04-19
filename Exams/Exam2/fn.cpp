#include <iostream>
#include <cmath>

using namespace std;

int w = 99;

int f(int &w, int x, int &z){
  static int g = 1;  
  
  if (w < z){
    int t = z;
    z = w;
    w = t;
  }else{
	g++;
  }
  x = 1;
  return (z);
  z = 13;
}
 
int main(){
  int a = 5;
  int b = 10;
  int t = 20;
  int d = 30;
  int w = 100;
 
  w = f(a, b, t);
  cout << a << "," << b << "," << t << "," << d << "," << w << endl; 

  return 0;
}

