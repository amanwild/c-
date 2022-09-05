#include<iostream>
using namespace std;

int main(){
    int marks[]={55,66,33,58};
    cout<<"marks of stdent 1 is ="<<marks[0]<<endl;//this is c methods print syntax
    cout<<"marks of stdent 2 is ="<<marks[1]<<endl;//this is c methods print syntax
    cout<<"marks of stdent 3 is ="<<marks[2]<<endl;//this is c methods print syntax
    cout<<"marks of stdent 4 is ="<<marks[3]<<endl;//this is c methods print syntax
    int* p =marks;
     cout<<endl<<"marks of stdent 1 is ="<<*p++<<endl;
     cout<<"marks of stdent 1 is ="<<*p++<<endl;
     cout<<"marks of stdent 1 is ="<<*p++<<endl;
     cout<<"marks of stdent 1 is ="<<*p<<endl;

    cout<<"using while loop"<<endl;
    int a=0,b=0;
    while (a<4)
    {
        cout<<"marks of stdent 1 is ="<<marks[a]<<endl;
        ++a;
    }

     cout<<"using do while loop"<<endl;
  
    do  
    {
        cout<<"marks of stdent 1 is ="<<marks[b]<<endl;
        ++b;
    }while (b<4);



       return 0;
}