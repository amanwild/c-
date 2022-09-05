#include<iostream>
using namespace std;

//this will not swap value
void swap(int a, int b){
 int   temp = a;
    a=b;
    b=temp;
}
// //call by reffernce using pointer
void swapbypointer(int* a,int* b){
    int   temp = *a;
    *a= *b;
    *b=temp;
}
//call by reffernce using address
void swapbyreffrence(int &a,int &b){
    int   temp = a;
    a= b;
    b=temp;
}
int main(){
    int a=5 ,b=10;
    cout<<"value of a is "<<a<<" value of b is "<<b<<endl<<endl;

    swap(a,b);
    cout<<"using call by value"<<endl;
    cout<<"value of a is "<<a<<" value of b is "<<b<<endl<<endl;
    
    swapbypointer(&a,&b);
    cout<<"using call by pointer"<<endl;
    cout<<"value of a is "<<a<<" value of b is "<<b<<endl<<endl;

    swapbyreffrence(a,b);
    cout<<"using call by reffrence"<<endl;
    cout<<"value of a is "<<a<<" value of b is "<<b<<endl<<endl;
    
    return 0;
}