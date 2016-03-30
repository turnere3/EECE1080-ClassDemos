// Pointers.cpp
// Michael Haas, April, 2009
// Demonstrates pointers and variable modifiers

#include <iostream>
#include <ctime>

using namespace std;

int main(){

  // 1. Declare some int variables (a, b, c) that are int, short int, and long int.

  unsigned char k = 66;
  int a;
  short int b;
  long long int c;

  cout << "Welcome to the Pointers Demo." << endl;
  cout << "------- -- --- -------- -----" << endl << endl;

  // 2.	Assign values to those int variables

  a = 27;
  b = 900;
  c = 130000000000; // note: value too big for a regular int

  // 3.	Display the sizes and values of these variables

  cout << "Part 3: Display values and sizes of variables" << endl;
  cout << "---------------------------------------------" << endl;
  cout << "The value of char variable  k is " << k << " and its size is " << sizeof(k) << endl;
  cout << "The value of int variable  a is "  << a << " and its size is " << sizeof(a) << endl;
  cout << "The value of short variable  b is " << b << " and its size is " << sizeof(b) << endl;
  cout << "The value of long variable  c is " << c << " and its size is " << sizeof(c) << endl;
  cout << endl;

  // 4.	Declare an int array x[] and initialize it with four different values

  int x[] = { 10, 20, 30, 40};

  // 5.	Declare a pointer to an int (pInt)

  int *pInt;

  // 6.	Assign the address of the int (a) to the int pointer pInt

  pInt = &a;

  // 7.	Display the value of (a), the value of (pInt), and the value that (pInt) points/refers to (*pInt)

  cout << "Part 7: Display value of an int variable and its pointer." << endl;
  cout << "---------------------------------------------------------" << endl;
  cout << "The value of int variable  a is " << a << endl;
  cout << "The value of pInt pointer  is " << pInt << endl;
  cout << "The value that int pointer pInt points to is " << *pInt << endl;
  cout << endl;

  // 8.	Assign the address of the int (b) to the int pointer pInt

  // pInt = &b;
  // error: cannot do this because b is a short
  // have to do this

  short *pShort = &b;

  // 9.	Display the value of (b), the value of (pShort), and the value that (pShort) points/refers to (*pShort)

  cout << "Part 9: Display value of a short variable and its pointer." << endl;
  cout << "----------------------------------------------------------" << endl;
  cout << "The value of short int variable b is " << b << endl;
  cout << "The value of short pointer pShort is " << pShort << endl;
  cout << "The value that short pointer pShort points to is " << *pShort << endl;
  cout << endl;

  // 10.	Assign the address of the int (c) to the int pointer pInt

  // pInt = &c;
  // error: cannot do this because c is a long
  // have to do this

  long long *pLong = &c;

  // 11.	Display the value of (c), the value of (pInt), and the value that (pInt) points/refers to (*pInt)

  cout << "Part 11: Display value of a long long variable and its pointer." << endl;
  cout << "---------------------------------------------------------------" << endl;
  cout << "The value of long long int variable c is " << c << endl;
  cout << "The value of long pointer pLong is " << pLong << endl;
  cout << "The value that long pointer pLong points to is " << *pLong << endl;
  cout << endl;

  // 12.	Modify the value that pInt refers/points to

  *pInt = 77;

  // 13. Display the value of variable a, the pointer pInt, and the value of what pInt points to

  cout << "Part 13: Display value of an int after assignment via pointer." << endl;
  cout << "--------------------------------------------------------------" << endl;
  cout << "The value of int variable  a is " << a << endl;
  cout << "The value of pInt pointer  is " << pInt << endl;
  cout << "The value that int pointer pInt points to is " << *pInt << endl;
  cout << endl;

  // 14.	Display the values of x[] with a loop

  cout << "Part 14: Display value of an int array x[] directly in a loop." << endl;
  cout << "--------------------------------------------------------------" << endl;
  int count;
  for (count = 0; count < sizeof(x)/sizeof(x[0]); count++){
    cout << "The value of x[" << count << "] is " << x[count] << endl;
  }
  cout << endl;

  // 15.	Assign the address of the (x[0]) to the int pointer pInt

  pInt = x;

  // 16.	Write a for-loop that loops four times.
  //		Within the loop, display the value of (pInt),
  //		display the value that (pInt) points/refers to,
  //		and then increment the pointer

  cout << "Part 16: Display values of an int array x[] using a pointer in a loop." << endl;
  cout << "----------------------------------------------------------------------" << endl;
  for (count = 0; count < 4; count++)
  {
    cout << "The value of pInt is " << pInt << "   ";
    cout << "pInt points to " << *pInt << endl;
    pInt++;
  }
  cout << endl;


  // 17.	Assign the address of the (x[0]) to the int pointer pInt

  pInt = &x[0];

  // 18.	Write a for-loop that loops six times.
  //		Within the loop, display the value of (pInt),
  //		display the value that (pInt) points/refers to (*pInt),
  //		and then increment the pointer.  Explain the last two values.

  cout << "Part 18: Display values of an int array x[] using a pointer in a loop." << endl;
  cout << "----------------------------------------------------------------------" << endl;
  for (count = 0; count < 6; count++)
  {
    cout << "The value of pInt is " << pInt << "   ";
    cout << "pInt points to " << *pInt << endl;
    pInt++;
  }
  cout << endl;

  // 19.	Declare a char array and initialize it to your name

  char myname[] = "Michael";

  // 20.	Declare a pointer variable to a char

  char *pChar;

  // 21.	Assign the address of the char array to the char pointer

  pChar = myname;

  // 22.	Write a while-loop that enters the loop if the value to which
  //		the char pointer points/refers is not zero.
  //		Within the loop, display the value that the char pointer refers/points to,
  //		and increment the pointer.

  cout << "Part 22: Display values of a char array myname using a pointer in a loop." << endl;
  cout << "-------------------------------------------------------------------------" << endl;
  while ( *pChar != 0 )
  {
    cout << "The value of pChar is " << pChar << endl;
    cout << "pChar points to " << *pChar << endl;
    pChar++;
  } // end of while loop
  cout << endl;

  // 23. reset the pointer to point to the beginning of the array (the first element)

  pChar = myname;

  cout << "Part 23: Display values of a char array myname after resetting the pointer" << endl;
  cout << "--------------------------------------------------------------------------" << endl;
  for (count = 0; *pChar != 0; count++)
  {
    cout << "The value of pChar is " << pChar << endl;
    cout << "pChar points to " << *pChar << endl;
    cout << "The value of myname[" << count << "] is " << myname[count] << endl;
    cout << "The address of pChar is: " << &pChar << endl;
    pChar++;
    cout << endl;
  }

  // 24. Create an array with 1000 elements, intialize all elements to 0

  int bigarray[1000] = {0};
  clock_t starttime, endtime;

  // increment every element by 1, ten thousand times, access each element directly

  int times, index;

  cout << "Part 24: Display values of an int array after 1,000,000 additions (direct access)" << endl;
  cout << "----------------------------------------------------------------------------" << endl;
  cout << "Before the loop: bigarray[0] = " << bigarray[0] << " and bigarray[999] = " << bigarray[999] << endl;

  // record the time when the loop starts
  starttime = clock();

  for (times = 0; times < 1000000; times++)   // how many times to do it
  {
    for (index = 0; index < 1000; index++){
      bigarray[index]++;
    }
  }
  // record the finish time
  endtime = clock();
  cout << "After the loop:  bigarray[0] = " << bigarray[0] << " and bigarray[999] = " << bigarray[999] << endl ;
  cout << "The loop took " << endtime - starttime << " milliseconds." << endl << endl;

  // 25. Do the same 10,000 additions on the array using pointers

  // first, reset all the values in the array to 0
  for (index = 0; index < 1000; index++){
    bigarray[index] = 0;
  }

  // create a pointer to the array

  int *bigptr;
  bigptr = bigarray;

  cout << "Part 25: Display values of an int array after 1,000,000 additions (pointer access)" << endl;
  cout << "-------------------------------------------------------------------------------" << endl;
  cout << "Before the loop: bigarray[0] = " << bigarray[0] << " and bigarray[999] = " << bigarray[999] << endl;
  // record the time when the loop starts
  starttime = clock();

  for (times = 0; times < 1000000; times++)   // how many times to do it
  {
    for (index = 0; index < 1000; index++)
    {
      (*bigptr)++;    // do the addition
      bigptr++;     // point to the next element
    }
    bigptr = bigarray;    // reset the pointer
  }
  // record the finish time
  endtime = clock();
  cout << "After the loop:  bigarray[0] = " << bigarray[0] << " and bigarray[999] = " << bigarray[999] << endl ;
  cout << "The loop took " << endtime - starttime << " milliseconds." << endl << endl;



}   // end of function main

