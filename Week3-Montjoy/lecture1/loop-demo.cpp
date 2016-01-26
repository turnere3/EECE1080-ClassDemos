// loop demo
// Rob Montjoy: Jan 2014

#include <iostream>
using namespace std;

int main(){
    int i;

    cout << "Loop 1:" << endl;
    cout << "Simple Classic for use with arrays, etc" << endl;
    for(i = 0; i < 10; i++){
        cout << "i: = " << i << endl;
    }
    
    cout << "Loop 2: Count Down" << endl;
    for( i = 10; i > 0; i--)
        cout << "2: i = " << i << endl;
        
    cout << "Loop 3: Count Up from 10 to 19" << endl;
    for( i = 10; i < 20; i++ )
        cout << "3: i = " << i << endl;

    cout << "Loop 4: Count up from 1 to 10" << endl;
    for( int k = 1; k <= 10; k++ )
        cout << "4: k = " << k << endl;

    cout << "Loop 5: while" << endl;
    i = 1;  int j = 0;
    while(i <= 10){
        cout << "5: i = " << i << " j = " << j << endl;
        i++;
        j = i % 3;
    }

    cout << "Loop 5a: while" << endl;
    i = 0;  j = 0;
    while(i = 0 && j <= 12){
        cout << "5: i = " << i << " j = " << j << endl;
        i++;
        j = i % 3;
    }
    
    cout << "Loop 6: while: count up from 0: SAME AS FOR" 
         << endl;
    i = 0;
    while(i < 10){
        cout << "6: i = " << i << endl;
        i++;
    }
    
    cout << "Loop 7: Do While" << endl;
    int k = 0;
    do{
        cout << "7: k = " << k << endl;
        k--;
    }while(k >= 0);

    cout << "Loop 8: Do While: Surprise" << endl;
    i = 0;
    do{
        cout << "8: i = " << i << endl;
        i++;
    }while(i >= 0);

    return 0;
}

