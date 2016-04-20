

#include <iostream>

using namespace std;

int main(){
  int x = 9, w = 7, z = 0, g = 3;

  int *p, *p1, *p2, *p3;

  cout << "x " << x << " w " << w << " z " << z << " g " << g << endl;
  p = &x;
  p1 = &w;
  p2 = p1;
  p3  = &g;
  *p3 = 99;
  *p2 = 89;

  cout << "x " << x << " w " << w << " z " << z << " g " << g << endl;
  cout << "p " << *p << " p1 " << *p1 << " p2 " << *p2 << " *p3 " << *p3 << endl;

  return 0;
}
