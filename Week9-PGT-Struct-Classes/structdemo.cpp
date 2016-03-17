/*
	Structure demo.
	Paul Talaga
	July 2015
*/

#include <iostream>
#include <string>

using namespace std;

struct person_t{
	int age;
	int height;
	string name;
};

struct career_t{
	int age;
	int height;
	string name;
};

void printPerson(person_t a){
	cout << "Name: " << a.name << endl;
	cout << "Age: " << a.age << endl;
	cout << "Height: " << a.height << endl;
}

person_t addAge(person_t a, int incr){
	a.age = a.age + incr;
	return a;
}

void addAge2(person_t& a, int incr){
	a.age = a.age + incr;
	return;
}

void addAge3( person_t* a, int incr){
  a->age = a->age + incr;
}

int main(){
	int a = 5;
	person_t bob;
	career_t sam;
	
	
	
	person_t bill;   // bill is an instance of the struct
	bill.name = "Bill";
	bill.age = 11;
	bill.height = 55;
	

	
	person_t* grace = new person_t;
	grace->name = "Grace";
	grace->age = 25;
	(*grace).height = 20;
	
	for(int i = 0; i < 5000000; i++){
		//bob = addAge(bob, 20);
		//addAge2(bob, 20);
		addAge3(&bob, 20);
	}

  int array[3]={1,5,6};
  
	printPerson(bob);
	printPerson(bill);
	printPerson(*grace);
	cout<<array[1]<<endl;
	int *b =array;
	cout<<b<<endl;
	cout<<&b<<endl;
	cout<<array;
	cout<<*(b+1)<<endl;


}
