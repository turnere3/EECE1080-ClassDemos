// Author: Rob Montjoy
// Source File: quadratic-part2.cpp
// Description: Solving a Quadratic Equation using the Quadratic formula
//
// Notes:
//  - Added real oot calcuations

#include <iostream>
#include <cmath>

using namespace std;

int main(){
  double a, b, c;
  double discriminant;
  double root1, root2;

  cout << "This is the Quadratic Equation Solver" << endl;
  cout << "\tAtypical Quadratic equation is in the following form" << endl;
  cout << "\tax^2 + bx + c = 0" << endl << endl;
  cout << "This solver uses the Quadratic Formula to solve for the roots of a Quadratic equation" << endl;
  cout << endl;
  cout << "Lets solve a Quadratic equation by first entering values for a,b,c" << endl;
  cout << "What is the value of a? ";
  cin >> a;
  cout << "What is the value of b? ";
  cin >> b;
  cout << "What is the value of c? ";
  cin >> c;

  cout << endl;
  cout << "Equation: " << a << "x^2 + " << b << "x + " << c << endl;
  discriminant = b*b - 4*a*c;
  if(discriminant > 0){
    cout << "The given equation has two roots which are as follows:" << endl;
    root1 = (-b + sqrt(discriminant))/(2*a);
    root2 = (-b - sqrt(discriminant))/(2*a);
    cout << "Discriminant: " << discriminant << endl;
    cout << "Root1: " << root1 << endl;
    cout << "Root2: " << root2 << endl;
  }else if(discriminant == 0){
    cout << "The given equation has only one real root which is as follows" << endl;
    root1 = (-b + sqrt(discriminant))/(2*a);
    cout << "Discriminant: " << discriminant << endl;
    cout << "Root1: " << root1 << endl;
  }else{
    cout << "The given equation has two Complex roots/solutions" << endl;
  }

  return 0;
}

