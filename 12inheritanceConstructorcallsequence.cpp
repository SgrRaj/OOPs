//parent or base class constructor called first and then after second constructor call fron child or derived class 
#include<iostream>
using namespace std;
class Person{
  public:
  string name;
  int age;

  Person(){
    cout<<"Parent contructor"<<endl;
  }
};

class Student :public Person{
  public:
  int rollno;

  Student(){
    cout<<"child constructor"<<endl;
  }

  void getInfo(){
    cout<<"name"<<name<<endl;
    cout<<"age"<<age<<endl;
    cout<<"rollno"<<rollno<<endl;
  }
};
int main(){
Student s1;
s1.name="sagar raj";
s1.age=21;
s1.rollno=2121442;
s1.getInfo();

}