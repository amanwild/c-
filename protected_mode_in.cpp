#include<iostream>
using namespace std;
class base{
    int data1;
    protected:
    int data2;
    public:
    void set(){
       
    }
    int get(){
         data1 = 10;
        data2 = 20;
        return data1 ;
    }
};
class derived : protected base{
    int data3 = 0;
    public:
        
    void show(){
        cout<<"data1 :"<<get()<<endl;
        cout<<"data2 :"<<data2<<endl;
        cout<<"data3 :"<<data3<<endl;
        data3 = get() + data2;
        cout<<" data3 = data1 + data2  :"<<data3<<endl;
    }

};
int main(){
    derived d;
    d.show();
    
    return 0;
}