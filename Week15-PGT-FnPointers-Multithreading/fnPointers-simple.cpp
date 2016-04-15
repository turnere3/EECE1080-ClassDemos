/*  Pointer to function demo via a map function which applies a given
    function to every element of a vector.
    Paul Talaga April 2016
*/

#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> thing){
  cout << "[";
  for(unsigned i = 0; i < thing.size(); i++){
    cout << thing[i];
    if(i < thing.size() - 1) cout << ", ";
  }
  cout << "]" << endl;
}

// This function accepts a pointer to a function and a vector of
// integers.  It applies the function to every element and returns
// the result.
vector<int> map(int (*fn)(int), vector<int> thing){
  vector<int> ret(thing.size());
  for(unsigned i = 0; i < thing.size(); i++){
    ret[i] = fn( thing[i] );
  }
  return ret;
}

// Some simple functions!
int addOne(int a){
  return a + 1;
}

int times10(int a){
  return a * 10;
}


int main(){
  vector<int> a(10);
  for(int i = 0; i < 10; i++){
    a[i] = i;
  }
  
  cout << "Pre: ";
  print(a);
  
  cout << "addOne: ";
  vector<int> b = map(addOne, a);
  print(b);
  
  cout << "times10: ";
  b = map(times10, a);
  print(b);
  
  cout << "times10 then addOne: ";
  b = map(addOne, map(times10, a));  // You can even nest them!
  print(b);
  
  return 0;
}
