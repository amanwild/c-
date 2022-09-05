#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter any two no.:";
    cin>>a;
    cin>>b;
    for(int m =a;m<=b;m++){
        int i;
        for ( i = 2; i <m ; i++)
        {
            if(m%i==0){
                break;
            }
        
        }        
        if(m==i){
            cout<<m<<endl;
        }            
    }
    return 0;
}