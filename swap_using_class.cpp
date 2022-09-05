#include<iostream>
using namespace std;
class y;
class x{
    int a1;
       friend void swap(x & ,y & );
    public:
    void setdata(int val1){
        a1=val1;
    }
    void get(){
        cout<<a1;
    }
};
class y{
    int a2;
    friend void swap(x & ,y & );
    public:
    void setdata(int val2){
        a2=val2;
    }
    void get(){
        cout<<a2;
    }
};
void swap(x & p,y  & q){
    int temp = p.a1;
    p.a1 = q.a2;
    q.a2 = temp;
}
int main(){
    x x1;
    y y1;
    x1.setdata(5);
     cout<<"value of x is ";
    x1.get();
    y1.setdata(50);
     cout<<endl<<"value of y is ";
    y1.get();
    swap(x1,y1);

    cout<<endl<<"value of x is ";
    x1.get();

    cout<<endl<<"value of y is ";
    y1.get();

    return 0;
}