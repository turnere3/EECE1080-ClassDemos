#include <iostream>

using namespace std;

int sum(int l[], int index, int length){  // From small i to larger i
  if( index == length) return 0;
  return sum(l, index + 1, length) + l[index];
}

int sum2(int l[], int index){  // From large i to small i
  if( index == 0) return 0;
  return sum2(l, index - 1 ) + l[index-1];
}


// Compile with g++ -O3 to make this faster.  It turns into a loop. 
void sum3(int l[], int index, int& ret){  // From large i to small i, no return
  //if( index == 0) return;
  ret = ret + l[0];
  return sum3(l, index - 1, ret );      // Tail recursive
}

int sum4(int l[], int length){
  int count = 0;
  for(int i = 0; i < length; i++){
    count += l[i];
  }
  return count;
}

int main(){
  
  const int SIZE = 100000;
  int bob[SIZE] = {};
  
  clock_t start = clock();
  cout << sum(bob,0,SIZE) << endl;
  cout << "time: " << clock() - start << endl;
  start = clock();
  cout << sum2(bob,SIZE) << endl;
  cout << "time: " << clock() - start << endl;
  start = clock();
  int ret = 0;
  sum3(bob,SIZE, ret);
  cout << ret << endl;
  cout << "time: " << clock() - start << endl;
  start = clock();
  
  cout << sum4(bob,SIZE) << endl;
  cout << "time: " << clock() - start << endl;
  start = clock();

  return 0;
}
