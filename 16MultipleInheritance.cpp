#include<iostream>
using namespace std;
class Student{
  public:
string name;
int age;

};

class Teacher{
  public:
string subj;
};

class TA:public Student,public Teacher{

};
int main(){
TA t1;
t1.name="Sagar raj";
t1.age=22;
t1.subj="oops";


cout<<"name: "<<t1.name<<endl;
cout<<"age: "<<t1.age<<endl;

}