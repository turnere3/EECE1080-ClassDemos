// Author: Rob Montjoy
// Source: 4x4.cpp
// Description: 4 nested for loops

#include <iostream>

using namespace std;

int main(){

  for( int i = 0; i < 4; i++){
		for(int x = 0; x < 4; x++){
			for(int q = 0; q < 4; q++){
				for(int z = 0; z < 4;z++){
					cout << i << "," 
					     << x << "," 
					     << q << "," 
					     << z << endl; 
				}
			}
		}
	}

	return 0;
}

