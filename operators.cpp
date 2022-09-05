#include<iostream>
using namespace std;
int main(){
    int a=3, b=2;
    //_________________________Arithmatic operators_________________
    //unary operators
    cout<<a<<" + "<<b<<" = "<<a+b<<endl;
    cout<<a<<" - "<<b<<" = "<<a-b<<endl;
    cout<<a<<" * "<<b<<" = "<<a*b<<endl;
    cout<<a<<" / "<<b<<" = "<<a/b<<endl;
    cout<<a<<" % "<<b<<" = "<<a%b<<endl;
        //binary operators
    cout<<a<<"++ = "<<a++<<endl;
    cout<<a<<"-- = "<<a--<<endl;
    cout<<" ++"<<b<<" = "<<++b<<endl;
    cout<<" --"<<b<<" = "<<--b<<endl;
     cout<<endl;

    cout<<"value of "<<a<<"=="<<b<<" is :"<<(a==b)<<endl;
    cout<<"value of "<<a<<"||"<<b<<" is :"<<(a||b)<<endl;
    cout<<"value of "<<a<<"!="<<b<<" is :"<<(a!=b)<<endl;
    cout<<"value of "<<a<<"<"<<b<<" is :"<<(a<b)<<endl;
    cout<<"value of "<<a<<"<="<<b<<" is :"<<(a<=b)<<endl;
    cout<<"value of "<<a<<">"<<b<<" is :"<<(a>b)<<endl;
    cout<<"value of "<<a<<">="<<b<<" is :"<<(a>=b)<<endl;
    cout<<endl;
    //_____________logical Operators_________________________
    cout<<"value of "<<a<<"=="<<b<<" && " <<a<<"<"<<b<<" is :"<<((a==b)&&(a<b))<<endl;
    cout<<"value of "<<a<<"=="<<b<<" || "<<a<<"<"<<b<<" is :"<<((a==b)||(a<b))<<endl;
    cout<<"value of "<<a<<"=="<<b<<" is :"<<(a==b)<<endl;
    cout<<"value of "<<a<<"!=="<<b<<" is :"<<(a!=b)<<endl;
    // cout<<a<<"value of a==b is :"<<((a==b)&&(a<b))<<endl;
    
    //_____________bitwise Operators_________________________
    int d = a<<b;
    cout<<"value of "<<a<<"<<"<<b<<" is : "<<a<<"*(2^"<<b<<")"<<" ie."<<d<<endl;
    int c = a>>b;
    cout<<"value of "<<a<<">>"<<b<<" is : "<<a<<"/(2^"<<b<<")"<<" ie."<<c<<endl;
    
}