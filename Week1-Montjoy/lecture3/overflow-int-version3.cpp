// Author: Rob Montjoy
// Source File: overflow-short-version2.cpp
// Description: Demostrate overflow of integer number

#include <iostream>
#include <cstdlib>
 
using namespace std;

main()
{
	// Use last positive number from version2
	int i = 2147483000;
	
	while(i >= 0){
	  // lets go one at a time if((i % 100) == 0)
	      cout << (long long)i << endl;
	  i++;
	}
	cout << (long long)i << endl;
	cout << "The last two lines are the limits for this datatype"
	     << endl;
	return 0;
}
