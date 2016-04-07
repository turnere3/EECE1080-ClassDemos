#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int SIZE=200;

void Printarray(int array[], int length);

void SelectionSort(int array[], int length);

void insertion_sort(int array[], int length);

int main(){
  srand(time(0));
  int rand_array[SIZE];
 
   int rand_array2[SIZE];
   
   
  for(int i=0;i<SIZE;i++){
      int x=rand()%100;
    rand_array[i]=x;
    rand_array2[i]=x;
   }
   

  
  //Printarray(rand_array,SIZE);  
  //Printarray(rand_array2,SIZE);  
  insertion_sort(rand_array,SIZE); 
  SelectionSort(rand_array2,SIZE);    
  return 0;
}

void Printarray(int array[], int length){
  for(int i=0; i<length;i++)
    cout<< array[i] << " ";
  cout<<endl;
}

void SelectionSort(int array[], int length){
    int temp_smallest, min_index, iterations=0;
    for(int i=0; i<(length-1); i++){
              temp_smallest = array[i];
              min_index = i;
       for(int j=i+1; j < length ; j++){
          if(array[j]< temp_smallest){
            temp_smallest = array[j];
            min_index=j; 
          }
          iterations++;
       }
       array[min_index]=array[i];
       array[i]=temp_smallest;
    }
    cout<< "iterations = " << iterations <<endl;
}

void insertion_sort(int array[], int length){
      int temp=0, iterations=0;
      for(int i=0; i<length; i++){
        int j=i;
        while(j>0 && array[j]<array[j-1]){
          temp=array[j];
          array[j]=array[j-1];
          array[j-1] =temp;
          iterations++;
          j--;
        }   
     }
     cout<< "iterations = " << iterations <<endl;
}


