#include<iostream>
using namespace std;

class Person{
public:
string name;
int age;
Person(){
  cout<<"Parent constructor"<<endl;

}


};
class Student :public Person{
  public:
int rollno;

void getInfo(){
  cout<<"name "<<name<<endl;
  cout<<"age "<<age<<endl;
  cout<<"rollno "<<rollno<<endl;
}
};
int main(){
Student s1;
s1.name="Sagar Raj";
s1.age=21;
s1.rollno=2121442;
s1.getInfo();
}