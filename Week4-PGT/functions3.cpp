// Demo of the speed difference between pass by value
// vs. pass by reference.
// Paul Talaga - CS1 - Spring 2016

#include <iostream>
#include <string>

using namespace std;

// int getSum(string &thing2){	// Fast way (but dangerous)
// int getSum(const string &thing2){	// Fast way (safe)
int getSum(string thing2){			// Slow
	int sum = 0;
	// Uncomment to look at address (locations) of variables.
	//cout << "sum: " << &sum << endl;
	//cout << "thing2: " << &thing2 << endl;
	for(unsigned int i = 0; i < thing2.length(); i++){
		sum = sum + thing2[i];
	}
	return sum;
}


int main(){
	unsigned sum = 0;
	string thing = "Hello world";
	// Uncomment to see address (location) of thing.
	//cout << "where: " << &thing << endl;
	for(unsigned i = 0; i < 10000000; i++){
		sum = sum + getSum(thing);
	}
	cout << "sum: " << sum << endl;
	
	return 0;
}


