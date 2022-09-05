#include<iostream>
using namespace std;
class base1{
    protected:
    int data1;
    public:
    void set (){
        data1 =100;
    }
    void show (){
        set();
        cout<<"this is value of base1 ="<<data1<<endl;
    }
};
class base2{
    protected:
    int data2;
    public:
    void set (){
        data2 =200;
    }
    void show (){
        set();
        cout<<"this is value of base1 ="<<data2<<endl;
    }
};
class derived :public base1,public base2{
    public:
    void show(){
    base1 :: show();
    base2 :: show();
    }
};
int main(){
    derived d;
    d.show();
    
    return 0;
}