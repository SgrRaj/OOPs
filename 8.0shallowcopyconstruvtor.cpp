#include<iostream>
using namespace std;
class Teacher{
  public:
    string name;
    double cgpa;

 // paramiterized  constructor 
Teacher(string name,double cgpa){
  this->name=name;
  this->cgpa=cgpa;
}

  //custom copy constructor
  Teacher(Teacher &obj){
    this->name=obj.name;
    this->cgpa=obj.cgpa;

  }



    void getInfo(){
      cout<<"name "<<name<<endl;
      cout<<"cgpa "<<cgpa<<endl;

    }
};
int main(){
   Teacher t1("Sagar",80.26);
    t1.getInfo();

    Teacher t2(t1);
    t2.getInfo();
   
}