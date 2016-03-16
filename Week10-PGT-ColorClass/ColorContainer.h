#ifndef CC_H
#define CC_H

#include <iostream>
#include <vector>

#include "Color.h"

using namespace std;

class ColorContainer{
public:
	ColorContainer(){}
	
	void append(Color c){
		colors.push_back(c);
	}
	
	int numColors(){
		return colors.size();
	}
	
	Color getLight(){
		Color ret(0,0,0);
		for(unsigned i = 0; i < colors.size(); i++){
			ret = ret + colors[i];
			ret.printRGB();
		}
		return ret;
	}
	
	void print(){
		for(unsigned i = 0; i < colors.size(); i++){
			colors[i].printRGB();
		}
	}
	
private:
	vector<Color> colors;
	
};

#endif