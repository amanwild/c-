#include<iostream>
using namespace std;
class clg{
    int id;
    public:
    int roll_no ;
    void set1(){
    id =1;
    }
   
    int get(){

        return id=1;
    }
    void stu(){}
};
class stu : public clg{
    int marks;
    public:
    void set(int a,int b){
        marks =a;
        roll_no=b;
    }
    void show(){
        cout<<"your std id is :"<<get()<<endl;
        cout<<"your std marks is :"<<marks<<endl;
        cout<<"your std roll no. is :"<<roll_no<<endl;
    }
};

int main(){
    
    stu st1;
    int m,r;
    cout<<"enter marks ,roll no,"<<endl;
    cin>>m>>r;
    
   st1.set1();
    st1.set(m,r);
    st1.show();
    return 0;
}