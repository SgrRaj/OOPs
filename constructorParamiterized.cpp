#include<iostream>
using namespace std;
class Teacher{
   private :
      double salary;

    public:
       string name;
       string subject;
       int rollno;
       string dept;

       Teacher(string n,string subj,int r,string d){
             name=n;
             subject=subj;
             rollno=r;
             dept=d;
       }

       void setSalary(double s){
        salary=s;
       }

       double getSalary(){
        return salary;
       }

       void getInfo(){
        cout<<name<<endl;
        cout<<subject<<endl;
        cout<<rollno<<endl;
        cout<<dept<<endl;
       }



};
int main(){
    Teacher t1("Sagar","c++",2121442,"cse");
      t1.getInfo();
}