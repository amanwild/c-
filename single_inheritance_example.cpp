#include<iostream>
using namespace std;
class emp{
    int data1;
    public:
    int data2;
    void set(){
        data1=10;
        data2=20;
    }
    int get1(){
        return data1;
    }
    int get2(){
         return data2;
    }
};
class stu: public emp{
    int data3;
    public:
    void process(){
        data3= get1() * data2;
    }
    void  show(){
        cout<<"data 1 is :"<<get1()<<endl;
        cout<<"data 2 is :"<<data2<<endl;
        cout<<"data 3 is :"<<data3<<endl;
    }
};
int main(){
    stu st1;
    st1.set();
    st1.process();
    st1.show();
    
    return 0;
}