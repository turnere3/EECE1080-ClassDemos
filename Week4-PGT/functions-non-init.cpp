// Demo of the effect of not initializing variables.
// Paul Talaga - CS1 - Spring 2016

#include <iostream>

using namespace std;

void test(){
	int a;
	cout << "a: " << a << endl;
	a = 7;
	return;
}


int main(){
	int b = 10;
	test();
	test();
	test();
}


