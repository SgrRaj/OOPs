//polymorphism me automatically choose krta h kaun sa contructor ya function call hoga ,,,,  and eska example h ye hai contructor overloading and function overloading  ............ niche example hai constructor overloading ka 
#include<iostream>
using namespace std;
class Person{
  public:
string name;
Person(){
  cout<<"contructor\n";
}

Person(string name){
  this->name=name;

}

};
int main(){

Person p1("sagar raj");
cout<<p1.name<<endl;
}