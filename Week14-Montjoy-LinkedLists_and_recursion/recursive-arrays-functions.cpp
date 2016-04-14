
#include <iostream>
#include <cstdlib>

using namespace std;

void randomlyFillArray(int array[], int length){
   for(int i = 0; i < length; i++){
     array[i] = rand()%101;
   }
}

void displayArray(int array[], int length){
   for(int i = 0; i < length; i++){
       cout << array[i] << ",";
   }
   cout << endl;
}

int SumOfArray_iteratively(int array[], int length){
   int sum = 0;
   for(int i = 0; i < length; i++){
       sum += array[i];
   }
   return sum;
}

int SumOfArray_recursive(int array[], int length, int current_sum){
  if(length <= 0) 
   return current_sum;

  current_sum += array[length-1];
  return SumOfArray_recursive(array, length - 1, current_sum);
}

int main(){
 int *array = new int[15];

 srand(time(0)/2);
 randomlyFillArray(array, 15);

 displayArray(array, 15);

 cout << SumOfArray_iteratively(array,  15) << endl;
 cout << SumOfArray_recursive(array,  15, 0) << endl;
}

