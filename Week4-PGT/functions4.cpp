#include <iostream>
#include <string>

using namespace std;

int getSum(int thing2){
	int counter = 0;
	counter++;
	return counter + thing2;
}


int main(){
	cout << getSum(1) << endl;
	cout << getSum(1) << endl;
	cout << getSum(1) << endl;
	return 0;
}


