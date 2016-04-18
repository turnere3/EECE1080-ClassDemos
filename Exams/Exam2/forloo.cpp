#include <iostream>
#include <cmath>

using namespace std;

int main(){

int b[3] = {1, 2};
int c[][3] = { {1, 2}, {3, 4, 5} };

for (int i = 0; i < 2; i++){
    int x = 0;
    for (int j = 0; j < 3; j++){
	x += c[i][j] * b[j];
    }
    cout << x << " ";
 }
cout << endl;  

        	        
}
