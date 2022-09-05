#include<iostream>
using namespace std;
class employee{
    int id ;
    int static c;
    public:
    void setdata(){
        cout<<"enter the id  of epmployee no. "<<++c<<" : ";
        cin>>id; 
    }
    void getdata(){
        cout<<"id  of employee no. "<<c<<" is "<<id<<endl;
    }
};
int employee ::c;
int main(){
    employee group[3];
    for (int i = 0; i < 3; i++)
    {
        group[i].setdata();
        group[i].getdata();
    }
    
    
    return 0;
}