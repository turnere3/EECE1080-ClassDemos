#include <iostream>
using namespace std;

int main(){
  int a, b, c, d;
 
  cout << "Enter four integers: ";
  cin >> a >> b >> c >> d;
  if (a < c){
    if (c < d){
      cout << "Red" << endl;
    }
  }else if (c >= b){
    cout << "Blue" << endl;
  }else{
    cout << "Orange" << endl;
  }

  if (d > a+b){
    cout << "Green" << endl;
  }
  cout << "Yellow" << endl;
  return 0;
}
