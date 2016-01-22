#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
 
  const int MAX_NUMBER = 10;
  
  srand(time(0));
  
  int num_correct = 0;
  clock_t start = time(0);
 
  cout << "How many questions do you want?";
  int num_questions = 0;
  cin >> num_questions;
  for(int i = 0; i < num_questions; i++){
    int a = rand() % MAX_NUMBER;  // Some number from 0..9
    int b = rand() % MAX_NUMBER;  // Some number from 0..9
    if(i == 0){
      cout << "Welcome to this amazing addition game!\n";
    }
    cout << i + 1 << " What is " << a << " + " << b << "?";
    // i++ is i = i + 1    is i += 1   post-increment
    // ++i      pre-increment
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

  cout << MAX_NUMBER << endl;
  clock_t end = time(0);
  
  cout << "You got a " << static_cast<float>(num_correct) * 100  / num_questions;
  cout << "%" << endl;
  cout << "You took " << end - start << " seconds!\n";
 
  return 0; 
}




