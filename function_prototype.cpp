#include<iostream>
using namespace std;

int sum(int a ,int b){//here int a, int b are formal parameter
int c = a + b;
return c;//return c nahi bhi likhe to chlenga
}

int sub(int,int);//these is prototype of function that used to tell cumpiler these name of function is exist in given code. 
int g();//these is prototype of function that used to tell cumpiler these name of function is exist in given code. 

int main(){
    int num1 ,num2;
     cout<<"enter first no. : ";
    cin>>num1;
     cout<<"enter second no. : ";
    cin>>num2;

     cout<<"sum of both no. is :"<<sum(num1 ,num2)<<endl;//here num 1, num2 are actual parameter
    sub(num1,num2);
     cout<<"sub of both no. is :"<<sub(num1 ,num2)<<endl;//here num 1, num2 are actual parameter

     g();
    
    return 0;
}

int sub(int a,int b){//here int a, int b are formal parameter
    int c = a-b;
}
int g(){
    cout<<"bye bye"<<endl;
    }