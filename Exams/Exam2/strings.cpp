

#include <iostream>
#include <string>
using namespace std;


string function1(string ss1, const string ss2[], 
                 string& ss4, string ss5[]){

     ss4 = ss4 + " modified.";
     ss5[0] = ss5[0] + ", element zero.";
     ss5[1] = ss5[1] + " array, element one.";
     return (ss1 + ss2[0] + ss2[1] + ss2[2]);
}


int main(){
     string s1 = "String object. ";
     string s2[3] = {"Array of ",  "three string ", "Objects."};
     string s3;

     string s4 = "Modifiable string";
     string s5[2] = {"Modifiable array",  "Modifiable"};

     s3 = function1(s1, s2, s4, s5);
     cout << s3 << endl << s4 << endl << s5[0] << endl ;
     cout << s5[1] << endl;
}

        	        

