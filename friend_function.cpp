#include<iostream>
using namespace std;
class complex{
    int a,b;
     public:
    void setdata(int a1, int a2){
        a=a1;
        b=a2;
    }
    friend complex sumcomplex(complex b1 ,complex b2){
        complex b3;
        b3.setdata((b1.a+b2.a),(b1.b+b2.b));
        return b3 ;
    }
    void getdata(){
        cout<<"given complex no. is "<<a<<" = "<<b<<"i"<<endl;
    }

};

int main(){
    complex num1,num2,sum;   
    num1.setdata(1,4);
    num2.setdata(5,8);
    num1.getdata();
    
    num2.getdata();

    sum = sumcomplex(num1,num2);  
    sum.getdata();  
    return 0;
}