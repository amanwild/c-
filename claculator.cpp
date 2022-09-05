#include<iostream>
using namespace std;
#include<cmath>
class simplecalculatur{
    protected:
    int a,b;
    public:
    void setdatasim(){
        cout<<"enter first no. for simple calculator :";
        cin>>a;
        cout<<"enter second no. for simple calculator :";
        cin>>b;
        a=a; b=b;
    }
    void getdatasim(){
        cout<<a<<" + "<<b<<"  = "<<a+b<<endl;
        cout<<a<<" - "<<b<<"  = "<<a-b<<endl;
        cout<<a<<" * "<<b<<"  = "<<a*b<<endl;
        cout<<a<<" / "<<b<<"  = "<<a/b<<endl;
    }
};
class scintificcalculatur{
    protected:
    int a,b;
    public:
    void setdatasci(){
        cout<<"enter first  no. for scintific calculator :";
        cin>>a;
        cout<<"enter second  no. for scintific calculator :";
        cin>>b;
        a=a; b=b;
    }
    void getdatasci(){
        cout<<" sin (" <<a<<")  = "<<sin(a)<<endl;
        cout<<" cos (" <<a<<")  = "<<cos(a)<<endl;
        cout<<" tan (" <<a<<")  = "<<tan(a)<<endl;
        cout<<" exp (" <<a<<")  = "<<exp(a)<<endl;
       
    }
};
class hybridcalculator: public simplecalculatur,public scintificcalculatur{
    public:
    void show(){
        setdatasim();
        getdatasim();
        setdatasci();
        getdatasci();
    }
};

int main(){
    hybridcalculator cal;
    cal.show();
    return 0;
}