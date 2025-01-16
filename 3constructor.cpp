#include<iostream>
using namespace std;
class Account{
    private:
     string pass;
     double avbal;

     public:
     Account(){                                  //constructor :- only called once time automatically          
                                                               //  while object creation  & same name as class & dont have return type 
      cout<<"Hi i am contructor"<<endl;
     }

       string userid;
       string username;

     void setPass(string p){
      pass=p;
     }
     
     string getPass(){
      return pass;
     }

     void setAvbal(double A){
      avbal=A;

     }

     double getAvbal(){
      return avbal;
     }



};
int main(){
      Account a1;
      Account a2;                         // 2 times obj created so 2 times contructor called 
      a1.userid="sgr";
      a1.username="sgrraj";
      a1.setAvbal(2500);
      a1.setPass("rajsgr");
      cout<<a1.userid<<endl;
      cout<<a1.username<<endl;
      cout<<a1.getAvbal()<<endl;
      cout<<a1.getPass()<<endl;
}