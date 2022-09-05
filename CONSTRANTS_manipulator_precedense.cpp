#include<iostream>
using namespace std;
int main(){
     const int c=30;
    int a=10, b=20;
    cout<<a<<" , "<<b<<" , "<<c<<endl;

    a=20; b=10; //c=40;we canot chage value of const int c
    cout<<a<<" , "<<b<<" , "<<c<<endl;


    int cal= a*b+a-b+a; //go to google cppreffrence for this rule
    //cal=  ((((a*b)+a)-b)+a);
    cout<<"a*b+a-b+a = "<<cal<<endl;
}