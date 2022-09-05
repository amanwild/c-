#include<iostream>
using namespace std;
int c = 50;//global veriables
int main(){
    // int a , b, c;
    // cout<<"enter no. a :";
    // cin>>a;
    // cout<<"enter no. b :";
    // cin>>b;
    // c=a+b;
    // cout<<"sum of a and b is :"<<c<<endl;
    // // cout<<"sum of a and b is :"<<::c; //scope resolution operator ::
    // float d=55.5;
    // long double e=52.3; 
    // cout<<"value  of d is :"<<d<<endl<<"and e is :"<<e<<endl;
    // cout<<"size of 55.5 is :"<<sizeof(55.5)<<endl;
    // cout<<"size of 55.5f is :"<<sizeof(55.5f)<<endl;
    // cout<<"size of 55.5l is :"<<sizeof(55.5l)<<endl;
    int sum =10;    
    int & add = sum;    //referance veriables
    cout<<"value of sum is :"<<sum<<endl;
    cout<<"value of add is :"<<add<<endl;

    float p=45.45;                              //
    int q=45.45;                                   //
    cout<<"value of p is :"<<int(p)<<endl;      //this is typecasting
    cout<<"value of q is :"<<(int)p<<endl;       //   
    cout<<"value of p is :"<<float(q)<<endl;    //
    cout<<"value of q is :"<<(float)q<<endl;    //
    int r =int(p);
    return 0;
}