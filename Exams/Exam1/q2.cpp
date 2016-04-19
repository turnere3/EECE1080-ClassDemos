#include <iostream>
using namespace std;
int main(){
  int x, y;
 
  cout << "Enter two integers: ";
  cin >> x >> y;
  while (x < 10 || y >= 7){
	x = x + 2;
	y = y - 3;
	cout << x << endl;
  }
  return 0;
}

