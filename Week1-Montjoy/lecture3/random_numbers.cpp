// Author: Rob Montjoy
// Source File: random_numbers.cpp
// Description: Generate a series of random numbers and count 
//              the Frequency of occurance

#include <iostream>
#include <cstdlib>
 
using namespace std;

main()
{
	int i;
	int freq_count0 = 0;
	int freq_count1 = 0;
	int freq_count2 = 0;
	int freq_count3 = 0;
	int freq_count4 = 0;
	int freq_count5 = 0;

  // Seed the random number generator
	srand(time(0)); 

	for(i = 0; i < 432000; i++){
	  // Generate a number between 0 and 5
		int random_number = rand()%6;

		if(random_number == 0)
		  freq_count0++;
		if(random_number == 1)
		  freq_count1++;
    if(random_number == 2)
		  freq_count2++;
		if(random_number == 3)
		  freq_count3++;
		if(random_number == 4)
		  freq_count4++;
		if(random_number == 5)
		  freq_count5++;
	}
	
	cout << " 0: " << freq_count0 << endl;
	cout << " 1: " << freq_count1 << endl;
	cout << " 2: " << freq_count2 << endl;
	cout << " 3: " << freq_count3 << endl;
	cout << " 4: " << freq_count4 << endl;
	cout << " 5: " << freq_count5 << endl;

	return 0;
}

