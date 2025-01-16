#include<iostream>
using namespace std;
//comment in below line 
class Student{
public:
 string name;
 double* cgpaptr;

 Student(string name,double cgpa){
  this->name=name;
  cgpaptr=new double;
  *cgpaptr=cgpa;

 }

 Student(Student &obj){
  this->name=obj.name;
  this->cgpaptr=obj.cgpaptr;

 }

 void getInfo(){
  cout<<"name "<<name<<endl;
  cout<<"cgpa "<<*cgpaptr<<endl;
 }
};

int main(){
  Student s1("Sagar Raj",8.2);
  Student s2(s1);// ranjan 
  s1.getInfo();

  *(s2.cgpaptr)=9.2;
  s1.getInfo();
}

// error aa gya bcz s2 ka cgpa set kiye or jb s1 ka getInfo kre to s1 m chnge dikha rha , output m deko  ... jbki 30 and 33 line same h code m                    yhi issue h shallow copy constructor m jb dynamic memory allocation hota h to (pointer or heap memory used)