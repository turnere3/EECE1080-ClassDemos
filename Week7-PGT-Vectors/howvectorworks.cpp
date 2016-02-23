#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

int main(){
  srand(time(0));
  //int a[100];
  vector<int> a;
  
  for(int i = 0; i < 20; i++){
    a.push_back(rand() % 100);
    cout << a.capacity() << ":" << i << ":" << &(a[0]) << endl;
  }
  
  
}
