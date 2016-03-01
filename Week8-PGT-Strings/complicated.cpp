#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void print(int a[], int length){
  for(int i = 0; i < length; i++){
    cout << i << ":" << a[i] << endl;
  }
}

void print(char a[]){
  a[0] = 'Z';
  int i = 0;
  int line = 1;
  cout << line << ":";
  line++;
  while(true){
    if(a[i] == '\n'){
      cout << endl << line << ":";
      line++;
    }else if(a[i] == '\0'){
      break;
    }else{
      cout << a[i];
    }
    i++;
  }
}

void print(string a){
  cout << "Length:" << a.length() << endl;
  a[0] = 'Z';
  cout << a;
}

int main(){
  string bob("This is bob's sentence.");

  int a[256] = {1,2,3,4};
  char c_bob[256] = "This\nis\nmultiple\nlines.";
  
  char c_bill[21] = "BillMaryGregLawrence";
  int number = 5;
  string bill("1234567890");
  
  cout << bill.c_str() << endl;
  
  string mystring(c_bill);
  
  return 0;
}
