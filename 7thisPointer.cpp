#include<iostream>
using namespace std;
class Teacher{
    private:
       double salary;
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

      void setSalary(double s){
        salary=s;
      }
      double getSalary(){
        return salary;

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
}