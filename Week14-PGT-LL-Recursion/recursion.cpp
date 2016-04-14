/*
  Demo of multiple ways of summing up numbers in an array.  3 variants of recursion, and
  one loop method.  All have slightly different speeds.
  Paul Talaga April 2016
*/

#include <iostream>

using namespace std;

// Simple way to do sum recursively.  Going up from 0 and stopping at the
// end.  Requires 2 integer variables.  Slowest.
int sum(int l[], int index, int length){  
  if( index == length) return 0;
  return sum(l, index + 1, length) + l[index];
}

// Simple way to do sum, but go down from the top.
// Requires one integer variable.  Slightly faster.
int sum2(int l[], int index){  // From large i to small i
  if( index == 0) return 0;
  return sum2(l, index - 1 ) + l[index-1];
}

// Most complex way.  Still one variable is used, but we 'return' the answer
// via a reference variable.
// If compiled with g++ -03  (full optimizations) the compiler can convert this into
// a loop and not make any new stack frames.
// Fastest recursive way to do sum.  As fast as a loop.
void sum3(int l[], int index, int& ret){
  if( index == 0) return;
  ret = ret + l[index-1];
  return sum3(l, index - 1, ret );      // Tail recursive!  No work after recursive call.
}

// The boring way with a loop.
int sum4(int l[], int length){
  int count = 0;
  for(int i = 0; i < length; i++){
    count += l[i];
  }
  return count;
}

int main(){
  
  const int SIZE = 100000;
  int bob[SIZE];
  for(unsigned i = 0; i < SIZE; i++){
    bob[i] = i % 100;
  }
  
  clock_t start = clock();
  cout << sum(bob,0,SIZE) << endl;
  cout << "sum  time: " << clock() - start << endl;
  
  start = clock();
  cout << sum2(bob,SIZE) << endl;
  cout << "sum2 time: " << clock() - start << endl;
  
  start = clock();
  int ret = 0;
  sum3(bob,SIZE, ret);
  cout << ret << endl;
  cout << "sum3 time: " << clock() - start << endl;
  
  start = clock();
  cout << sum4(bob,SIZE) << endl;
  cout << "loop time: " << clock() - start << endl;
  start = clock();

  return 0;
}
