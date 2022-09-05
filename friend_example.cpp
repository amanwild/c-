#include<iostream>
using namespace std;
class y;
class x{
    int data;
    public:
    void setdata(int value){
        data = value ;
    }
    friend void add(x,y);
};

class y{
    int data2;
    public:
    void setdata(int value){
        data2 = value ;
    }
     friend void add(x,y);
};
void add(x a1,y b1){
    cout<<(a1.data + b1.data2);
}

int main(){
    x a;
    a.setdata(5);
    y b;
    b.setdata(50);
    add(a,b);
    
    return 0;
}