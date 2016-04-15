/*  Pointer to function demo, using C++ templating (single and dual),
    to allow a generic map function.
    Paul Talaga April 2016
*/

#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

// A templated function that can accept and print a vector of any type as long
// as << works on the stored type.
template <typename T>
void print(vector<T> thing){
  cout << "[";
  for(unsigned i = 0; i < thing.size(); i++){
    cout << thing[i];
    if(i < thing.size() - 1) cout << ", ";
  }
  cout << "]" << endl;
}

// This templated (2 type) function applies a provided function to each
// element in the vector and returns the resulting vector.
// The dual types allows this function to accept any typed
// vector, and output to any type vector, but the provided function
// type must match.
// The simple type declaration for a function pointer is:
//    int (*function)(int)
// Where function is a pointer to a function which takes an int
// and returns an int.
template <typename T, typename S> // Type T comes in S goes out
vector<S> map(S (*fn)(T), vector<T> thing){
  vector<S> ret(thing.size());
  for(unsigned i = 0; i < thing.size(); i++){
    ret[i] = fn( thing[i] );
  }
  return ret;
}

int addOne(int a){
  return a + 1;
}

int times10(int a){
  return a * 10;
}

string toUpper(string s){
  string ret = s;
  for(unsigned i = 0; i < s.length(); i++){
    ret[i] = toupper(s[i]);
  }
  return ret;
}

bool isEven(int number){
  return number % 2 == 0;
}

unsigned length(string s){
  return s.length();
}

int main(){
  vector<int> a(10);
  for(int i = 0; i < 10; i++){
    a[i] = i;
  }
  
  cout << "Pre: ";
  print(a);
  
  cout << "addOne: ";
  vector<int> b = map(addOne, a);
  print(b);
  
  cout << "times10: ";
  b = map(times10, a);
  print(b);
  
  cout << "times10 then addOne: ";
  b = map(addOne, map(times10, a));
  print(b);
  
  // String example
  vector<string> s;
  s.push_back("Hello");
  s.push_back("this");
  s.push_back("is");
  s.push_back("a");
  s.push_back("test");
  
  cout << "\nPre: ";
  print(s);
  vector<string> t = map(toUpper, s);
  
  cout << "toUpper: ";
  print(t); 
  
  // Change of type example
  cout << "Pre: ";
  print(a); // a is an int vector
  cout << "isEven: ";
  print( map(isEven, a) );  // a bool vector!

  
  cout << "\nPre: ";
  print(s);
  cout << "String length: ";
  print( map(length, s) );

  
  
  return 0;
}
