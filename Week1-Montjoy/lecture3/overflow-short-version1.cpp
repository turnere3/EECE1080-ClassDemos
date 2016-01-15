// Author: Rob Montjoy
// Source File: overflow-short.cpp
// Description: Demostrate overflow of integer number

#include <iostream>
#include <cstdlib>
 
using namespace std;

main()
{
	short i = 0;
	
	while(i >= 0){
	  if((i % 100) == 0)
	      cout << (long long)i << endl;
	  i++;
	}
	cout << (long long)i << endl;
	return 0;
}
