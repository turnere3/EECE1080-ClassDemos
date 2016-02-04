// Demo of functions w/ overloading and pass-by-reference.
// Paul Talaga - CS1 - Spring 2016
#include <iostream>

using namespace std;

int add(int a, int b){
	return a + b;
}

int rangeSum(int from , int to, int &loop_times){
	int sum = 0;
	int loop = 0;
	for(int i = from; i <= to; i++){
		sum = add(sum, i);
		loop++;
		//sum = sum + i;
	}
	loop_times = loop;
	return sum;
}  

int rangeSum(int from, int to){
	int junk;
	return rangeSum(from, to, junk);
}  

int rangeSum(int to){
	// Assume from is 0
	return rangeSum(0, to);
}  


int main(){
	cout << "The sum from 1 to 1 is: " << rangeSum(1,1) << " should be: 1" << endl;
	cout << "The sum from -1 to 1 is: " << rangeSum(-1,1) << " should be: 0" << endl;
	cout << "The sum from 5 to 1 is: " << rangeSum(5,1) << " should be: 0" << endl;
	cout << "The sum from 0 to 100 is: " << rangeSum(100) << " should be: 0" << endl;

	int loop_t;
	cout << "The sum from 0 to 100 is: " << rangeSum(0, 100, loop_t) << " should be: 0" << endl;
	cout << "I looped " << loop_t << " times.\n";
	cout << "The sum from 5 to 10 is: " << rangeSum(5,10) << endl;
}


