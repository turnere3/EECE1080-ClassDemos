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

return 0;
    cout << "Loop 8: Do While: Surprise" << endl;
    i = 0;
    do{
        cout << "8: i = " << i << endl;
        i++;
    }while(i >= 0);

    return 0;
}

/* Output
Loop 1:
Simple Classic if for use with arrays, etc
i: = 0
i: = 1
i: = 2
i: = 3
i: = 4
i: = 5
i: = 6
i: = 7
i: = 8
i: = 9
Loop 2: Count Down
2: i = 10
2: i = 9
2: i = 8
2: i = 7
2: i = 6
2: i = 5
2: i = 4
2: i = 3
2: i = 2
2: i = 1
Loop 3: Count Up from 10
3: i = 10
3: i = 11
3: i = 12
3: i = 13
3: i = 14
3: i = 15
3: i = 16
3: i = 17
3: i = 18
3: i = 19
Loop 4: Count up from 1
4: k = 1
4: k = 2
4: k = 3
4: k = 4
4: k = 5
4: k = 6
4: k = 7
4: k = 8
4: k = 9
4: k = 10
Loop 5: while
5: i = 0 j = 0
Loop 6: while: count up from 0: SAME AS FOR
6: i = 0
6: i = 1
6: i = 2
6: i = 3
6: i = 4
6: i = 5
6: i = 6
6: i = 7
6: i = 8
6: i = 9
Loop 7: Do While
7: k = 0
Loop 8: Do While: Surprise  (infinate) 
8: i = 0
8: i = 1
8: i = 2
8: i = 3
8: i = 4
8: i = 5
8: i = 6
8: i = 7
8: i = 8
8: i = 9
8: i = 10
.
.
.
.
.
*/

