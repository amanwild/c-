#include<iostream>
using namespace std;

class hybridcalculator{
    int a1,b1,c1,d1;
    public:
    hybridcalculator(int p, int q, int r,int s) :  a1(p+10),b1(q+a1){
    c1=r;d1=s;//this is another method to initialize constructor

    // hybridcalculator(int p, int q, int r,int s) :  b1(q), a1(p+b1),  c1(r), d1(s){
    // this will give garbege value of a1, 
    // cause a1 will first execute  before b1 cause a1 decleared first 

    cout<<"Called to simple calculator :"<<a1<<endl;
    cout<<"Called to scintific calculator :"<<b1<<endl;
     cout<<"Called to hybridcalculator calculator :"<<c1<<endl;
     cout<<"Called to hybridcalculator calculator :"<<d1<<endl;
    }    
};

int main(){
    hybridcalculator cal(1,2,3,4);    
    return 0;
}