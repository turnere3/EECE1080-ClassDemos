#include <iostream>
#include <stdlib.h>

using namespace std;



int main(){
  
  srand(time(0));
  
  int num_correct = 0;

  for(int i = 0; i < 10; i++){
    int a = rand() % 10;  // Some number from 0..9
    int b = rand() % 10;  // Some number from 0..9
    
    if(i == 0){
      cout << "Welcome to this amazing addition game!\n";
    }
    cout << "What is " << a << " + " << b << "?";
    
    int ans = 0;
    cin >> ans;
    
    if( ans == a + b){
      cout << "Good job!\n";
      num_correct += 1; // num_correct = num_correct + 1;
    }else{
      cout << "Stay positive, you can get this!\n";
      cout << "That was wrong. " << a << "+" << b;
      cout << "=" << a+b << endl;
    }
  
  }
  
  cout << "You got a " << static_cast<float>(num_correct) * 100  / 10;
  cout << "%" << endl;
 
  return 0; 
}
