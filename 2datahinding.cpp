#include<iostream>
using namespace std;
class Account{
  private:
     string password;
     int avbalance;
  public:
       string userid;
       int accountno;
       
   void setPassword(string p){
        password =p;
   }

   string getPassword(){
      return password;
   }
       
   void setavbalance(int n){
      avbalance=n;
   }    

   int getavbalance(){
      return avbalance;
   }
};
int main(){
   Account a1;
   a1.userid="sgr";
   a1.accountno=1234567890;
   a1.setPassword("sgrcgc");
   a1.setavbalance(50000);
   cout<<a1.userid<<endl;
   cout<<a1.accountno<<endl;
   cout<<a1.getPassword()<<endl;
   cout<<a1.getavbalance()<<endl;

}