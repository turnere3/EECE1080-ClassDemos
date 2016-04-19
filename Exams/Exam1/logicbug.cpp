# include <iostream>
using namespace std;

double myPower(int x, int y){
  // Returns x ^ y 
  double sum = 1;
  for(int i = 1; i <= y; i++){
    sum = sum * x;
  }
  return sum;
}


int main(){

for(int i = 0; i < 5; i++){
	cout << "2^" << i << " = " << myPower(2, i) << endl;
}

for(int i = 0; i < 5; i++){
	cout << "3^" << i << " = " << myPower(3, i) << endl;
}

for(int i = 0; i < 5; i++){
	cout << "4^" << i << " = " << myPower(4, i) << endl;
}
	return 0;
}

