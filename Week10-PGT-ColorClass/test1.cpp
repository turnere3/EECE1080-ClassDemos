#include <iostream>

// Demo to show the null terminator

using namespace std;

int main(){
  char a[] = "Cincy";
  
  char* b = a;
  cout << a << endl;
  for(int i = 0; i < 16; i++){
    cout << i << ":" << *(b+i);
    cout << " - " << (int)*(b+i) << endl;
  }
}
