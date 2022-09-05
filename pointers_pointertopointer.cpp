#include<iostream>
using namespace std;

int main(){
    int a=10;
    int* b=&a;
    cout<<"address of a is :"<<&a<<endl;
    cout<<"address of a is :"<<b<<endl;
    cout<<"address of b is :"<<&b<<endl;

    cout<<"value of b is :"<<*b<<endl<<endl;
    // pointer to pointer
    int** c= &b;
    cout<<"adress of b is:"<<c<<endl;
    cout<<"address of c is:"<<&c<<endl;
    cout<<"value of c is:"<<**c<<endl;
    




    return 0;
}