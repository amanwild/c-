#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void setdata(int a1,int a2){
        a=a1;b=a2;
    }
    void getdata(){
        cout<<"given complex no. is "<<a<<" , "<<b<<"i ."<<endl;
    }
    friend complex  sumcomplex(complex x,complex y){
       complex z;
        z.setdata((x.a+y.a),(x.b+y.b));
        return z;
    }

};

int main(){
    complex aman,sahu,sum;
    aman.setdata(5,6);
    aman.getdata();
    sahu.setdata(9,5);
    sahu.getdata();
    sum=sumcomplex(aman,sahu);
    sum.getdata();
    return 0;
}