#include <iostream>

#include "Color.h"
#include "ColorContainer.h"
using namespace std;

int main(){

	Color a;
	a.printRGB();
	
	Color red(100, 0, 0);
	Color green(0,100,0);
	
	Color other = red + green;
	other.printRGB();
	
	//////////////////////////////
	
	ColorContainer pallette;
	pallette.append(red);
	pallette.append(green);
	pallette.append(Color(2,2,2));
	
	cout << "Printing all\n";
	pallette.print();
	cout << "Total sum\n";
	pallette.getLight().printRGB();
	
	
	return 0;
}