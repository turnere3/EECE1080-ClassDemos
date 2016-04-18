#include <iostream>

using namespace std;

class Rational {
  public:
    Rational() {
	numerator = 0;;
	denominator = 1;;

    }
    Rational(double in_num, double in_den) {
	numerator = in_num;
	denominator = in_den;;
    }
    void print(){
	cout << numerator << " / " << denominator << endl;
    }
    Rational add(const Rational &secondRational){
	Rational retval;
 	retval.numerator = (numerator*secondRational.denominator + secondRational.numerator*denominator);
 	retval.denominator = (secondRational.denominator*denominator);
	return retval;
    }
    Rational operator+ (const Rational& secondRational){
    	return(add(secondRational));
    }

  private:
	double numerator;
	double denominator;
    

};

int main(){

  Rational R1(3.,7.0), R2(25.,9.), Result;

  Result = Result.add(R2);
  Result.print();

  Result = R1 + R2;
  Result.print();

}
