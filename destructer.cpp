#include<iostream>
using namespace std;
class num{
    public:
    num(){
        cout<<"constructer created"<<endl;
    }
    ~num(){
        cout<<"constructer destructed"<<endl;
        
    }
};
int main(){
        cout<<"main created"<<endl;
    num num1;{
        cout<<"constructer called from {}main"<<endl;
        num n2;
        num n3;
        cout<<"constructer called off {}from main"<<endl;        
    }
        cout<<"main ended"<<endl;
    return 0;
}