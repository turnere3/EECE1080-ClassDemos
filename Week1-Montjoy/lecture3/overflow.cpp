// Author: Rob Montjoy
// Source File: overflow.cpp
// Description: Demostrate overflow of integer number

#include <iostream>
#include <cstdlib>
 
using namespace std;

main()
{
	int i = 2147483600;
	
	while(i >= 0){
	  //if((i % 100) == 0)
	      cout << i << endl;
	  i++;
	}
	cout << (long long)i << endl;
	return 0;
}
