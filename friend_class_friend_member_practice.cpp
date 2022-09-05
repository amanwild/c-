#include<iostream>
using namespace std;
class complex;
class calculator{
    int c,d;
    public:
    void sum (int a,int b ){
        c=a;d=b;
        int f =c+d;            
    }
    void getdata(){
                cout<<"sum of "<<c<<"and"<<d<<" is :"<<c+d<<endl;

    }
    int sumcomplex(complex,complex);
    int sumaddcomplex(complex,complex);
};
class complex{
    int x,y;
    friend  int calculator:: sumcomplex(complex ,complex );
    friend  int calculator:: sumaddcomplex(complex ,complex );
    friend class :: calculator;
    public:
    void setdata(int a1,int a2){
        x=a1;y=a2;
    } 
    void getdata(){
        cout<<"given value is "<<x<<" , "<<y<<"."<<endl;
    }
};
int calculator :: sumcomplex(complex p,complex q){
     return (p.x+q.x);
 }
 int calculator :: sumaddcomplex(complex p,complex q){
     return (p.y+q.y);
 }

int main(){
    complex aman,sahu;
    aman.setdata(9,6);
    sahu.setdata(9,6);
    sahu.getdata();
    aman.getdata();
     calculator cal;
    int res =cal.sumcomplex(aman,sahu) ;
    cout<<"sum of real no. is :"<<res<<endl;
     int resc =cal.sumaddcomplex(aman,sahu) ;
    cout<<"sum of real no. is :"<<resc<<endl;
     
     
    return 0;
}