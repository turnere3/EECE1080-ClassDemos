// Author: Rob Montjoy
// Source File: quadratic-part3.cpp
// Description: Solving a Quadratic Equation using the Quadratic formula
//
// Notes:
//    - Added complex roots

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
  discriminant = b * b - 4 * a * c;
  if(discriminant > 0){
    cout << "With a of Discriminant: " << discriminant;
    cout << "the given equation has two roots which are as follows:" << endl;
    root1 = (-b + sqrt(discriminant))/(2 * a);
    root2 = (-b - sqrt(discriminant))/(2 * a);
    cout << "\tRoot1: " << root1 << endl;
    cout << "\tRoot2: " << root2 << endl;
  }else if(discriminant == 0){
    cout << "With a of Discriminant: " << discriminant;
    cout << "the given equation has only one real root which is as follows" << endl;
    root1 = (-b + sqrt(discriminant))/(2 * a);
    cout << "\tRoot: " << root1 << endl;
  }else{
    cout << "With a of Discriminant: " << discriminant;
    cout << "the given equation has two Complex roots/solutions which are as follows:" << endl;
    double real_part = -b /(2 * a);
    double imaginary_part = sqrt(-discriminant)/(2 * a);

    cout << "\tDiscriminant: " << discriminant << endl;
    cout << "\tRoot1: " << real_part << " + " << imaginary_part << "i" << endl;
    cout << "\tRoot2: " << real_part << " - " << imaginary_part << "i" << endl;

  }

  return 0;
}

