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
  //to make copy of s1  in heap for s2 with another address and same s1 value in those s2 adress.
  cgpaptr=new double;
  *cgpaptr=*obj.cgpaptr;

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
  s2.name="ranjan";
  s2.getInfo();
}

  