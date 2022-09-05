#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    // void set(int a1, int b1){
    //     a=a1;b=b1;
    // }
    void get(){
        cout<<"value of a is :"<<a<<endl;
        cout<<"value of b is :"<<b<<endl;
    }
    complex (void);//constructer declaration
};
complex :: complex(void){ //this is default constructer cous it is decleared in public section and it dont take parameters
    a=10;b=20;
}
int main(){
    complex com;
    // c.set();
    com.get();
    return 0;
}