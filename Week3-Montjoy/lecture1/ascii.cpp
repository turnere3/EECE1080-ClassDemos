
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  char character = ' ';
  cout << setw(8) << "Decimal" << setw(8) << "ASCII" << endl;
  while(character <= 126){
    cout << setw(8) << static_cast<int>(character) 
         << setw(8) << character
         << endl;
    character++; 
  }
  return 0;
}
