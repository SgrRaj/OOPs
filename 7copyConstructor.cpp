#include<iostream>
using namespace std;
class Teacher{
  public:
    string name;
    string subj;
    int rollno;
    string dept;
   
    Teacher(string name,string subj,int rollno,string dept){
      this->name=name;
      this->subj=subj;
      this->rollno=rollno;
      this->dept=dept;
      
    }
          // self made copy constructor or custom copy constructor
    Teacher (Teacher &orgObj){    // call by refreance
      this->name=orgObj.name;
      this->subj=orgObj.subj;
      this->rollno=orgObj.rollno;
      this->dept=orgObj.dept;
    }

    void getInfo(){
      cout<<name<<endl;
      cout<<subj<<endl;
      cout<<rollno<<endl;
      cout<<dept<<endl;
    }

};

int main(){
  Teacher t1("sagar","c++",2121442,"cse");
  t1.getInfo();
  cout<<" "<<endl;
  

  Teacher t2(t1);
  cout<<"i am 2nd obj"<<endl;
    t2.getInfo();


}