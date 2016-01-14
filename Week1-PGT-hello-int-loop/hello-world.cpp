#include <iostream>

using namespace std;

int main(){
  
  string name;
  string age;
  cout << "What is your name?";
  cin >> name;
  cout << "What is your age?";
  cin >> age;
  
  cout << "Hello " << name << endl;
  cout << "Wow, " << age << ", you are old!\n";
  return 0;
}
