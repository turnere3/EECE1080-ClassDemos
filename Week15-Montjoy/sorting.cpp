
#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;


int Random(int start, int end){
  return start + rand()%(end-start);
}

bool wayToSort(int i, int j) { return i > j; }

int main(){

  int *array1 = new int [25];

  for(int i = 0; i < 25; i++){
    array1[i] = Random(0, 100);
  }

  for(int i = 0; i < 25; i++){
    cout << array1[i] << ",";
  }
  cout << endl;
  sort(array1, array1+25);
  for(int i = 0; i < 25; i++){
    cout << array1[i] << ",";
  }
  cout << endl;
  sort(array1, array1+25, wayToSort);
  for(int i = 0; i < 25; i++){
    cout << array1[i] << ",";
  }
  cout << endl;
  return 0;
}
