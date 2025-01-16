#include<iostream>
using namespace std;
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
  s1.getInfo();

  Student s2(s1);
  s2.getInfo();
}