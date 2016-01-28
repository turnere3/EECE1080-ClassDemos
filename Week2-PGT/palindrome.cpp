#include <iostream>
#include <stdlib.h>

using namespace std;

bool isPalindrome(int number){
	int four = number % 10;
	int third = (number / 10) % 10;
	int second = (number / 100) % 10;
	int first = (number / 1000) % 10;
	
  return (four == first) && (third == second);
}


int main(){
  
  int counter = 0;
  
  for(int i = 1000; i <= 9999; i++){
  	if(isPalindrome(i)){
  		counter++;
  	}
  }
  
  cout << "count: " << counter << endl;
  
  return 0; 
}




