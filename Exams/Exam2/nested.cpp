#include <iostream>
#include <cmath>

using namespace std;

int main(){

  int array[10] = {1,3,4,7,9,11,13,15,17,19};
   	
  cout << array[1] << ", " << array[array[1]]
        	        << ", " << array[array[array[1]]] << endl;
        	        
}
