#include<iostream>
using namespace std;
class student{
    protected:
    int roll_no;
    public:
    void setdata(int a){
        roll_no =a;
    }
    void getdata(){
        cout<<"your roll no. is :"<<roll_no<<endl;
    }
};
class test: virtual public student{ //this is virtual base class
    protected:
    int maths, phy;
    public:
    void setmarks(int a,int b){
        maths =a;
        phy =b;
    }
    void getmarks(){
        cout<<"your maths marks is :"<<maths<<endl;
        cout<<"your maths marks is :"<<phy<<endl;
    }
};
class sports :virtual public student{ //this is virtual base class
    protected:
    int score;
    public:
    void setscore(int a){
        score =a;
    }
    void getscore(){
        cout<<"your sports is :"<<score<<endl;
    }
};
class result :public test,public sports{
    int result;
    public:
    void show(){    
        cout<<"your result is :"<<phy+maths+score<<endl;
        getdata();
        getmarks();   
        getscore();
    }
};
int main(){
    result aman;
    aman.setdata(24);
    aman.setmarks(99,99);
    aman.setscore(100);
    aman.show();
    
    return 0;
}