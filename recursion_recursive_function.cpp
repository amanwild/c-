#include<iostream>
using namespace std;

int factoral(int a){
    if(a<=1){
        return 1;
    }
    return a*factoral(a-1);
}
/*step by step caculation os factorial 4
factoral(4)=4*factorial (3) 
factoral(3)=4*3*factorial (2)
factoral(2)=4*3*2*factorial (1) 
factoral(1)=4*3*2*1*/
int main(){
    int a;
    cout<<"enter any no."<<endl;
    cin>> a;
    cout<<"factoral of "<<a<<" is :"<<factoral(a)<<endl;
    return 0;
}