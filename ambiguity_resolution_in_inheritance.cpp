#include<iostream>
using namespace std;
class base1{
    protected:
    int base1;
    public:
    void set (){
        base1 =50;
    }
     void show(){
         set();
     cout<< "value of base1 is  :"<< base1<<endl;
   
    }
};
class base2{
    protected:
    int base2;
    public:
    void set (){
        base2 = 100;
    }
    void show(){
        set();
     cout<< "value of base2 is  :"<< base2<<endl;
   
    }
};
class derived : public base1 ,public base2{
   int a;
   public:
   void show(){
       base1::show();   //this is ambiguity resolution
       base2::show();   //this is ambiguity resolution
   }
};
int main(){
    derived d;
    d.show();    
    return 0;
}