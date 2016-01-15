// Author: Rob Montjoy
// Source File: overflow-int-version2.cpp
// Description: Demostrate overflow of integer number

#include <iostream>
#include <cstdlib>
 
using namespace std;

main()
{
	// Use last positive number from version1
	int i = 2147000000;
	
	while(i >= 0){
	  if((i % 1000) == 0)
	      cout << (long long)i << endl;
	  i++;
	}
	cout << (long long)i << endl;
	return 0;
}
