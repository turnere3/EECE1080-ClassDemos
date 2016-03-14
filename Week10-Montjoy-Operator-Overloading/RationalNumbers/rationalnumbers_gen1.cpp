#include <cmath>
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>

using std::setw;
using std::setprecision;
using std::showpoint;
using std::setfill;

class Rational
{
public:
  Rational(int = 1, int = 1);
  void SetRational(int,int);
  void Addition(Rational);
  void Subtraction(Rational);
  void Multiplication(Rational);
  void Division(Rational);
  void PrintRational();
  void PrintRationalFloatingPoint();
private:
  int Numerator;
  int Denominator;


};

Rational::Rational(int num, int den){
  SetRational(num, den);
}

void Rational::SetRational(int num,int den){
  Numerator = num;
  Denominator  = den;
}

void Rational::Addition(Rational R){
  int new_Denominator   = Denominator*R.Denominator;
  int new_Numerator   = (Numerator*R.Denominator) +
                        (R.Numerator*Denominator);

  Numerator   = new_Numerator;
  Denominator   = new_Denominator;
}

void Rational::Subtraction(Rational R){
  int new_Denominator   = Denominator*R.Denominator;
  int new_Numerator   = (Numerator*R.Denominator) -
                        (R.Numerator*Denominator);

  Numerator   = new_Numerator;
  Denominator   = new_Denominator;
}

void Rational::Multiplication(Rational R){
}

void Rational::Division(Rational R){
}

void Rational::PrintRational(){
  cout << Numerator << "/" << Denominator << endl;
}

void Rational::PrintRationalFloatingPoint(){
  cout << (double)Numerator /  (double)Denominator << endl;
}

main(){
  Rational R1(2,4), R2, R3(3,3);



  R1.PrintRationalFloatingPoint();



  cout << " R1 = R1 + R2 "  << endl;
  ;
  R1.PrintRational();
  R2.PrintRational();
  R1.Addition(R2);
  R1.PrintRational();

  cout << "R1 = R1 - R2" << endl;
  ;
  R2.SetRational(4, 8);
  R1.PrintRational();
  R2.PrintRational();
  R1.Subtraction(R2);
  R1.PrintRational();


}


