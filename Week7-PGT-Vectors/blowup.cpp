#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

int main(){
  srand(time(0));

  vector<int> a;
  
  // This will consume a LOT of memory (1/2 your ram actually)
  while(1){
    a.push_back(rand() % 100);
  }
  
  /*for(int i = 0; i < 100; i++){
    //a[i] = 56;  // Bad way
    a.push_back(i+100);
  } */
  
  cout << "Len: " << a.size() << endl;
  for(int i = 0; i < 100; i++){
    //cout << i << ":" << a[i] << endl;
    cout << i << ":" << a.at(i) << endl;
  }
  
  
}
