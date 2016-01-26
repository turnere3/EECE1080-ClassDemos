// Author: Rob Montjoy
// Description: Generate 10 Random strings up to characters long


#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(){
  int count, i;
  
  srand(time(0));

  for(count = 0; count < 10; count++) {
    string random_string;
    for(i = 0; i < rand()%10+1; i++){
      random_string +=  'a' + rand() % 26; 
    }
    cout << random_string << endl;
  }
  cout << "Count: " << count << endl;
  cout << "i: " << i << endl;
  return 0;
}
