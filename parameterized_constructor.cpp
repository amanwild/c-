#include<iostream>
using namespace std;
class complex{
    int a, b;
    public:
    void get (void){
        cout<<"value of complex  is :"<<a<<" + "<<b<<"i ."<<endl;
    }
    complex(int,int);//this is parameterized constructor declaration
};
complex :: complex(int a1,int b1){//this is parameterized constructor couse it takes parameteres ie. int a1,int b1;
    a=a1;b=b1;
}
int main(){
    complex com(5,10);
    com.get();
    complex add=complex(6,4);
    add.get();
    
    return 0;
}