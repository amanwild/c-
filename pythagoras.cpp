#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
bool py(int a,int b ,int c){

    int x = max(a,max(b,c));
    int y = max(min(a,b),max(min(b,c),min(a,c)));
    int z = min(a,min(b,c));
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;

    if(x*x==y*y+z*z){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    if(py(5,4,3)){
        cout<<"correct";
    }
    else{
        cout<<"not correct";
    }
    return 0;
}