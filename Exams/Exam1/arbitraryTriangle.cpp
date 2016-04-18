#include <iostream>
#include <cmath>

using namespace std;

void arbitraryTriangleArea(double n1, double n2, double n3, double& a, double& per){
  a = -1;
  per = -1;
  if(n1 + n2 < n3)return;
  if(n2 + n3 < n1)return;
  if(n1 + n3 < n2)return;
  double s = (n1 + n2 + n3)/2;
  per = n1 + n2 + n3;
  a = sqrt(s * (s-n1) * (s-n2) * (s-n3));
}

int main(){

  double n1, n2, n3, area, perimeter;
  cout << "Enter 3 numbers";
  cin >> n1;
  cin >> n2;
  cin >> n3;
  arbitraryTriangleArea(n1, n2, n3, area, perimeter);
  cout << "Area: " << area << endl;
  cout << "Perimeter: " << perimeter << endl;
  
  return 0; 
}
