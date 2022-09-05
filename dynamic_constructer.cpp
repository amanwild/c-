#include<iostream>
using namespace std;
class bank{
    int principle,year;
    float intrest,total;
    public:
    bank(){}
    bank(int p,int y,float r);
    bank(int p,int y,int R);
    void show(){
        cout<<"total amaunt of "<<year<<" year with interest :"<<intrest<<" is :"<<total<<endl;
    }
};
 bank:: bank(int p,int y,float r){
     principle=p;
     year=y;
     intrest=r;
     total=principle;
     for (int i = 0; i < year; i++)
     {
        total=total *(1+r);
     }
     
}
 bank:: bank(int p,int y,int R){
     principle=p;
     year=y;
     intrest=float(R)/100;
     total=principle;
     for (int i = 0; i < year; i++)
     {
        total=total *(1+intrest);
     }
    
}
int main(){ 
    int p,q,R;
    float r;
    bank b1,b2;

    cout<<"enter amount ,year,intrest :";  
    cin>>p>>q>>r; 
    b1=bank(p,q,r) ;  
    b1.show();

    cout<<"enter amount ,year,intrest :";  
    cin>>p>>q>>r;   
    b1=bank(p,q,R) ;  
    b2.show();
    return 0;
}