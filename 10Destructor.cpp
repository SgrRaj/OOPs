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

//destructor 
~Student(){
  cout<<"Hi i am delete everything\n";
  //delete internally memory using delete keyword 
  delete cgpaptr;
}

void getInfo(){
  cout<<"name "<<name<<endl;
  cout<<"cgpa "<<*cgpaptr<<endl;

}
};
int main(){
    Student s1("Safgar Raj ",8.2);
    s1.getInfo();
}