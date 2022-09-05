#include<iostream>
using namespace std;
class emp{
 int  b,a;
 public:
 void set(int a){
     this->a=a; //this keyword returns the value of member function to the  class object(set(4))
 }
 emp& setb(int b){
     this->b=b; //this keyword returns the object(set(4))
     return *this;
 }
 void get(){
    cout<<"value is :"<<a<<endl;   
    cout<<"value is :"<<b<<endl;   
 }
};
int main(){
    emp aman;
    aman.set(4);
    aman.setb(5).get();
  

    return 0;
}