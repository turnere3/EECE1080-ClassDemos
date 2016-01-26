#include <iostream>
#include <string>

using namespace std;

int main(){
 
 string input = "";
 int offset = 0;
 
 cout << "Enter a string to encrypt: ";
 getline(cin, input); // This uses pass-by-reference to change input
    // Will also get all characters until enter is pushed.
 cout << "Enter the offset amount: ";
 cin >> offset;
 
 cout << "Your input was:\n" << input << endl << endl;
 
 for(int i = 0; i < input.length(); i++){
  int c = static_cast<int>(input[i]);   // Convert each character to an int
  if( c >= 'a' && c <= 'z'){  // Only handle lower-case letters
    c = c + offset;
    c = (c - 'a') % 26;       // Handle wrap-around
    while(c < 0){             // If c is now negative, make it positive
      c = c + 26;
    }
    c = c + 'a';              // Bump the number up to the usual ascii range
  }else if( c >= 'A' && c <= 'Z'){  // Only handle upper-case letters
    c = c + offset;
    c = (c - 'A') % 26;
    while(c < 0){
      c = c + 26;
    }
    c = c + 'A';
  }
  cout << (char)(c);
 }
 cout << endl;
}
