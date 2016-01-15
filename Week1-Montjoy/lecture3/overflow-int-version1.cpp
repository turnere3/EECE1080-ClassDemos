// Author: Rob Montjoy
// Source File: overflow.cpp
// Description: Demostrate overflow of integer number

#include <iostream>
#include <cstdlib>
 
using namespace std;

main()
{
	int i = 0;
	
	while(i >= 0){
	  if((i % 1000000) == 0)
	      cout << (long long)i << endl;
	  i++;
	}
	cout << (long long)i << endl;
	return 0;
}
