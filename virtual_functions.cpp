#include<iostream>
using namespace std;
class base{
    public:
    int var_base=50;
    virtual void show(){  // ::::here we added virtual  //for what we want we shuold get 
        cout<<"value of base variable is :"<<var_base<<endl;
    }
};
class derived : public base{
    public:
    int var_derived=100;
    void show(){
        cout<<"value of derived variable is :"<<var_derived<<endl;
    }
};

int main(){
    base obj_base,*pointer_base;
    derived obj_derived,*pointer_derived;

    pointer_derived=&obj_derived;
    pointer_base=&obj_derived;

    pointer_base->show();
    pointer_derived->show();
    
    return 0;
}