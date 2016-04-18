#include <iostream>

using namespace std;


int enough(int number){
  int i = 0;
  int sum = 0;
  while(sum <= number){
    i++;
    sum += i;
  }
  return --i;
}

int enough2(int number){
  int i = 0;
  int sum = 0;
  while(sum < number){
    sum += i;
    i++;
  }
  if(sum == number){
    return i - 1;
  }
  return i - 2;
}

int main(){

  int number;
  cout << "Enter a number";
  cin >> number;
  cout << "Enough: " << enough(number) << endl;
  cout << "Enough: " << enough2(number) << endl;
  
  return 0; 
}
