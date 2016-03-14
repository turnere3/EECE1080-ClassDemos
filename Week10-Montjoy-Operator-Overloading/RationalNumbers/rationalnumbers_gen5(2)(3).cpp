// Complete Rational Class with overloaded math operators +/-*
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

int gcd(int, int);


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
		Rational &operator+(const Rational &);
		Rational &operator+=(const Rational &);
		Rational &operator-(const Rational &);
		Rational &operator-=(const Rational &);
		Rational &operator*(const Rational &);
		Rational &operator*=(const Rational &);
		Rational &operator/(const Rational &);
		Rational &operator/=(const Rational &);
	private:
		void Reduce();
		int Numerator;
		int Denominator;
		
		
};

Rational::Rational(int num, int den)
{
	SetRational(num, den);
}

void Rational::SetRational(int num,int den)
{
	Numerator = num;
	Denominator  = den;

	Reduce();
}

Rational &Rational::operator*(const Rational &R)
{
	Denominator 	*= R.Denominator;
	Numerator 	*= R.Numerator;

	Reduce();

	return *this;	
}

Rational &Rational::operator*=(const Rational &R)
{
	Denominator 	*= R.Denominator;
	Numerator 	*= R.Numerator;

	Reduce();

	return *this;	
}

Rational &Rational::operator/(const Rational &R)
{
	Denominator 	*= R.Numerator;
	Numerator 	*= R.Denominator;

	Reduce();

	return *this;	
}

Rational &Rational::operator/=(const Rational &R)
{
	Denominator 	*= R.Numerator;
	Numerator 	*= R.Denominator;

	Reduce();

	return *this;	
}

Rational &Rational::operator-(const Rational &R)
{
	int new_Denominator 	= Denominator*R.Denominator;
	int new_Numerator 	= (Numerator*R.Denominator) -
					(R.Numerator*Denominator);
	
	Numerator 	= new_Numerator;
	Denominator 	= new_Denominator;

	Reduce();

	return *this;	
}

Rational &Rational::operator-=(const Rational &R)
{
	int new_Denominator 	= Denominator*R.Denominator;
	int new_Numerator 	= (Numerator*R.Denominator) -
					(R.Numerator*Denominator);
	
	Numerator 	= new_Numerator;
	Denominator 	= new_Denominator;

	Reduce();

	return *this;	
}

Rational &Rational::operator+(const Rational &R)
{
	int new_Denominator 	= Denominator*R.Denominator;
	int new_Numerator 	= (Numerator*R.Denominator) +
					(R.Numerator*Denominator);
	
	Numerator 	= new_Numerator;
	Denominator 	= new_Denominator;

	Reduce();

	return *this;	
}

Rational &Rational::operator+=(const Rational &R)
{
	int new_Denominator 	= Denominator*R.Denominator;
	int new_Numerator 	= (Numerator*R.Denominator) +
					(R.Numerator*Denominator);
	
	Numerator 	= new_Numerator;
	Denominator 	= new_Denominator;

	Reduce();

	return *this;	
}

void Rational::Addition(Rational R)
{
	int new_Denominator 	= Denominator*R.Denominator;
	int new_Numerator 	= (Numerator*R.Denominator) +
					(R.Numerator*Denominator);
	
	Numerator 	= new_Numerator;
	Denominator 	= new_Denominator;

	Reduce();
}

void Rational::Subtraction(Rational R)
{
	int new_Denominator 	= Denominator*R.Denominator;
	int new_Numerator 	= (Numerator*R.Denominator) -
					(R.Numerator*Denominator);
	
	Numerator 	= new_Numerator;
	Denominator 	= new_Denominator;

	Reduce();
}

void Rational::Multiplication(Rational R)
{
	Denominator 	*= R.Denominator;
	Numerator 	*= R.Numerator;

	Reduce();
}


void Rational::Division(Rational R)
{
	
	Denominator 	*= R.Numerator;
	Numerator 	*= R.Denominator;

	Reduce();
}

void Rational::Reduce()
{
	int GCD, OldDen;

	do { 	// Try to reduce at least once 
		// Reduce until no reductions possiable
		GCD = gcd(Denominator, Numerator);
		OldDen = Denominator;		 //  Save a value;
		Numerator /= GCD;
		Denominator /= GCD;
	}
	while(Denominator != OldDen );
}

//gcd function definition
int gcd (int u, int v)
{
 	int temp;
  
  	while ( v != 0 )
    	{
      		temp = u % v;
      		u = v;
      		v = temp;
    	}
 	return (u);
}


void Rational::PrintRational()
{
	cout << Numerator << "/" << Denominator << endl;
}

void Rational::PrintRationalFloatingPoint()
{
	cout << (double)Numerator /  (double)Denominator << endl;
}


main()
{
	Rational R1(2,4), R2, R3(3,3);



	cout << " R1 = R1 + R2 " ;
        R1.PrintRational();
        R2.PrintRational();
        R1.Addition(R2);
        R1.PrintRational();

        cout << "R1 = R1 - R2 ";
        R2.SetRational(4, 8);
        R1.PrintRational();
        R2.PrintRational();
        R1.Subtraction(R2);
        R1.PrintRational();


	cout << "R1 = R1 * R2 ";
        R1.PrintRational();
        R2.PrintRational();
        R1.Multiplication(R2);
        R1.PrintRational();

	cout << "R1 = R1 / R2 ";
        R1.PrintRational();
        R2.PrintRational();
        R1.Division(R2);
        R1.PrintRational();




	cout << "R1 = R2 + R3 " << endl;
        R1.PrintRational();
        R2.PrintRational();
        R3.PrintRational();
	R1 = R2 + R3;
        R1.PrintRational();


	cout << "R1 = R2 - R3 " << endl;
        R1.PrintRational();
        R2.PrintRational();
        R3.PrintRational();
	R1 = R2 - R3;
        R1.PrintRational();

	cout << "R1 = R1 * R2 " << endl;
        R1.PrintRational();
        R2.PrintRational();
	R1 = R1 * R2;
        R1.PrintRational();

	cout << "R1 = R1 / R2 " << endl;
        R1.PrintRational();
        R2.PrintRational();
	R1 = R1 / R2;
        R1.PrintRational();

	cout << "R1 += R1 " << endl;
        R1.PrintRational();
	R1 +=  R1;
        R1.PrintRational();

	cout << "R1 -= R1 " << endl;
        R1.PrintRational();
	R1 -=  R1;
        R1.PrintRational();

	cout << "R2 *= R2 " << endl;
        R2.PrintRational();
	R2 *=  R2;
        R2.PrintRational();

	cout << "R2 /= R2 " << endl;
        R2.PrintRational();
	R2 /=  R2;
        R2.PrintRational();

	return 0;
}






