#include<iostream>
using namespace std;
class teacher{
    private:
    double salary;

    public:
      string name;
      string subject;

       void setSalary(double s){
          salary=s;
      }

      double getSalary(){
        return salary;
      }
    

};
int main(){
    teacher t1;
    t1.name="Sagar Raj";
    t1.subject="c++";
    t1.setSalary(25000);
    cout<<t1.name<<endl;
    cout<<t1.getSalary()<<endl;

}