#include<iostream>
using namespace std;
 
class simplecalculatur{
  
    public:
        int a;
    simplecalculatur(int a1){
        a=a1;
        cout<<"Called to simple calculator :"<<a<<endl;
     
    }
};
class scintificcalculatur{   
    public:
    int b;
    scintificcalculatur(int b1){
        b=b1;
        cout<<"Called to scintific calculator :"<<b<<endl;
    }
};
class hybridcalculator: public simplecalculatur,public scintificcalculatur{
    int c1,d1;
    public:
    hybridcalculator(int p, int q, int r,int s) :  simplecalculatur(p) ,scintificcalculatur(q){
    c1=r;
    d1=s;
     cout<<"Called to hybridcalculator calculator :"<<d1<<endl;
     cout<<"Called to hybridcalculator calculator :"<<c1<<endl;
    }
};

int main(){
    hybridcalculator cal(1,2,3,4);
    
    return 0;
}