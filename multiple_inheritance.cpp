#include<iostream>
using namespace std;
class base1{
    protected:
    int base1;
    public:
    void set1 (int a){
        base1 =a;
    }
     void show1(){
     cout<< "value of base1 is  :"<< base1<<endl;
   
    }
};
class base2{
    protected:
    int base2;
    public:
    void set2 (int a){
        base2 =a;
    }
    void show2(){
     cout<< "value of base2 is  :"<< base2<<endl;
   
    }
};
class base3{
    protected:
    int base3;
    public:
    void set3 (int a){
        base3 = a;
    }
    void show3(){
     cout<< "value of base3 is  :"<< base3<<endl;
   
    }
};
class derived : public base1 ,public base2,public base3{
    protected:
    int derive;
    public:
    void show(){
        show1();
        show2();
        show3();
     cout<< "sum of base1 and base2 is  :"<<(derive =base1 + base2+ base3)<<endl;
   
    }
};
int main(){
    derived aman;
    aman.set1(25);
    aman.set2(25);
    aman.set3(25);
    aman.show();
    return 0;
}