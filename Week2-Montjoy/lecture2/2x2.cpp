// Author: Rob Montjoy
// Source: 2x2.cpp
// Description: 2 nested for loops

#include <iostream>

using namespace std;


int main(){

	for(int r = 0; r < 2; r++){
		for(int c = 0; c < 2;c++){
			cout << r << "," << c << " " ;
		}
		cout << endl;
	}

	return 0;
}

