#include<iostream>
using namespace std;
class Person{
  public:
string name;
int age;

Person(string name,int age){
  this->name=name;
  this->age=age;
}
};

class Student:public Person{
  public:
  int rollno;
  Student(string name,int age,int rollno):Person(name,age){
    this->rollno=rollno;

  }
};
class Gradstu:public Student{
  public:
  string res;
  Gradstu(string name,int age,int rollno,string res):Student(name,age,rollno){
    this->res=res;

  }

  void getInfo(){
    cout<<"name: "<<name<<endl;
    cout<<"age: "<<age<<endl;
    cout<<"rollno: "<<rollno<<endl;
    cout<<"res: "<<res<<endl;
  }
};


int main(){
Gradstu g1("sagar raj",21,2121442,"cse");
g1.getInfo();
}