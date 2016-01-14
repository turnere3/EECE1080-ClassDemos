#include <iostream>

using namespace std;

int main(){
  
  int number = 0;
  while(1){
    number = number + 1;
    if(number < 0){
      cout << "OH crap, how did this happen!\n";
      return 0;
    }
  }
  return 0;
}
