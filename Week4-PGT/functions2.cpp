#include <iostream>

using namespace std;

int add(int &bob, int &bill){
	bob++;
	bill = bill + 10;
	return bob + bill;
}


int main(){
	int a = 53; 
	int b = 10;
	cout << "a + b: " << add(a,b) << endl; 
	cout << "a: " << a << " b: " << b << endl;
}


