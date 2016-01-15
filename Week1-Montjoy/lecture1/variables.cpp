// Author: Rob Montjoy
// Source File: variables.cpp

#include <iostream>

using namespace std;

int main()
{
  int x;
  double y;
  
  cout << "Enter integer x: ";
  cin >> x;
  cout << "Enter decimal y: ";
  cin >> y;
  
  int result = x * y;
  cout << "result: = " << result << endl;
  
  return 0;
}

