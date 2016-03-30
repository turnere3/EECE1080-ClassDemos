#include <iostream>
#include <string>


using namespace std;

const int SIZE = 4;

class Course{
 
   public:
    Course(int);
    void getStudents(string myStudents[]);
    void setStudent(string myStudent, int position);
    string* getStudents();
  
    private:
   string students[SIZE];
  
};

Course::Course(int x){
 for(int i=0;i < SIZE;i++)
       setStudent("no name",i);
}
 //using pointer method to access an array
string* Course::getStudents(){
  return students;
}

//using loop to access array
void Course::getStudents(string myStudents[]){
    for(int i=0;i < SIZE;i++)
        myStudents[i]=students[i];
}

//sets student
void Course::setStudent(string myStudent, int position){
    students[position]=myStudent;
}


int main(){
  
  string myStudents[SIZE];
  string* myotherStudents; //used to point to private array starting point
  Course a(2);
  
  a.setStudent("seth",0);
  a.setStudent("Steve",1);
  
  a.getStudents(myStudents);//loop method puts private student array contents into another array
   
   
  for(int i=0;i < SIZE;i++)
    cout<<myStudents[i]<<endl;
  cout<<endl;
  
  a.setStudent("Jill",2);
  a.setStudent("Ali",3);
  
  myotherStudents = a.getStudents();//pointer method sets pointer to point to private array starting poin
  
  for(int i=0;i < SIZE;i++)
        cout<<myotherStudents[i]<<endl;

  
  return 0;  
}



