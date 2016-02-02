#include <iostream>
#include <string>

using namespace std;

int getSum(string thing2){
	int sum = 0;
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
	//cout << "where: " << &thing << endl;
	for(unsigned i = 0; i < 10000000; i++){
		sum = sum + getSum(thing);
	}
	cout << "sum: " << sum << endl;
	
	return 0;
}


