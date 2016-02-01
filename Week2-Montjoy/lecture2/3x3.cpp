// Author: Rob Montjoy
// Source: 3x3.cpp
// Description: 3 nested loops

#include <iostream>
using namespace std;


int main(){

	for(int d = 0; d < 3; d++){
		for(int r = 0; r < 3; r++){
			for(int c = 0; c < 3; c++)
			{
				cout << d << "," << r << "," << c << "\t"; 
			}
		}
		cout << endl;
	}

	return 0;
}

