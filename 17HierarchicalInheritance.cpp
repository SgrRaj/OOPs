#include<iostream>
using namespace std;
class Person{
  public:
string name;
int age;

};

class Student:public Person{
  public:
  int rollno;
};

class Teacher:public Student{
  public:
string subj;

};

int main(){
Teacher t1;
t1.name="Sagar Raj";
t1.rollno=2121442;
t1.age=21;
t1.subj="oops";
cout<<"name: "<<t1.name<<endl;
cout<<"rollno: "<<t1.rollno<<endl;
cout<<"age: "<<t1.age<<endl;
cout<<"subj: "<<t1.subj<<endl;
}