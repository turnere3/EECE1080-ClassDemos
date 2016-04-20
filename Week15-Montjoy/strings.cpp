

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
  string x = "sdfsDfsDF";

  for(int i = 0; i < x.length();i++){
	cout << x[i] ;
  }
  cout << endl;
  for(int i = 0; i < x.length();i++){
	x[i] = tolower(x[i]);
  }
  for(int i = 0; i < x.length();i++){
	cout << x[i] ;
  }
  cout << endl;
  for(int i = 0; i < x.length();i++){
	if(x[i] == 'd') 
		x[i] = ';';
  }
  for(int i = 0; i < x.length();i++){
	cout << x[i] ;
  }
  cout << endl;
   
  return 0;
}
