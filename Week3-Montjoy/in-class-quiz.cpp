// In-class solutions from Jan 28 - CS1 - Talaga's section

#include <iostream>

using namespace std;

bool isPalindrome(int v){
	// Return true if v is a palindrome
	// Assumes a 4 digit number
	return (v % 10 == v/1000 % 10) && (v/100 % 10 == v/10 % 10);
}

int main(){
	cout << "1. What is the sum of numbers from 0 to 1000?" << endl;
	int sum = 0;
	for(int i = 0; i <= 1000; i++){
		sum = sum + i;
	}
	cout << "Answer: " << sum << endl;
	
	// **********************************************************************
	cout << endl << "2. What is the sum of numbers from 100 to 1000?" << endl;
	sum = 0;
	for(int i = 100; i <= 1000; i++){
		sum = sum + i;
	}
	cout << "Answer: " << sum << endl;
	
	// **********************************************************************
	cout << endl << "3. What is the sum of numbers all odd numbers from 99 to 501?" << endl;
	sum = 0;
	for(int i = 99; i <= 501; i++){
		if(i % 2 != 0){
			sum += i;
		}
	}
	cout << "Answer: " << sum << endl;
	// **********************************************************************
	cout << endl << "4. How many numbers, between 0 and 1200 inclusive";
	cout << ", are divisible by 13?" << endl;
	sum = 0;
	for(int i = 0; i <= 1200; i++){
		if(i % 13 == 0){
			sum++;
		}
	}
	cout << "Answer including 0: " << sum << endl;
	sum = 0;
	for(int i = 1; i <= 1200; i++){
		if(i % 13 == 0){
			sum++;
		}
	}
	cout << "Answer not including 0: " << sum << endl;
	
	// **********************************************************************
	cout << endl << "5. How many numbers, between 0 and 1500 inclusive,";
	cout << " are divisible by 3 or 7?" << endl;
	sum = 0;
	for(int i = 0; i <= 1500; i++){
		if(i % 3 == 0 || i % 7 == 0){
			sum++;
		}
	}
	cout << "Answer including 0: " << sum << endl;
	cout << "Answer not including 0: " << sum - 1 << endl;
	
	
	// **********************************************************************
	cout << endl << "6. What is the sum squares from 100 to 1200, inclusive?" << endl;
	sum = 0;
	for(int i = 100; i <= 1200; i++){
		sum = sum + i * i;
	}
	cout << "Answer: " << sum << endl;
	
	
	// **********************************************************************
	cout << endl << "Bonus. How many numbers, between 1000 and 9999 are palindromes?" << endl;
	sum = 0;
	for(int i = 1000; i <= 9999; i++){
		if(isPalindrome(i)){
			sum++;
		}
	}
	cout << "Answer: " << sum << endl;

	cout << "\nOther Questions from another inclass Assignment\n";
	// **********************************************************************
	cout << endl << "A. How many pairs of numbers, each between";
	cout << " 0 and 1000 inclusive, when added, are even?" << endl;
	sum = 0;
	for(int i = 0; i <= 1000; i++){
		for(int j = 0; j <= 1000; j++){
			if( (i + j) % 2 == 0){
				sum++;
			}
		}
	}
	cout << "Answer: " << sum << endl;

	// **********************************************************************
	cout << endl << "B. What is the sum of ascii values for 'Hello World'?" << endl;
	sum = 0;
	string hello = "Hello World";
	for(unsigned i = 0; i < hello.length(); i++){
		sum = sum + static_cast<int>(hello[i]);
	}
	cout << "Answer: " << sum << endl;
	
	
}
