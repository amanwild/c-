#include<iostream>
using namespace std;

int main(){
     int marks[]={52,63,66,93};
    cout<<"marks of 1 students are :"<<marks[0]<<endl;
    cout<<"marks of 2 students are :"<<marks[1]<<endl;
    cout<<"marks of 3 students are :"<<marks[2]<<endl;
    cout<<"marks of 4 students are :"<<marks[3]<<endl<<endl;

    int* a = marks;
    cout<<"value of marks *a is "<<*a++<<endl;
    cout<<"value of marks *(a+1) is "<<*a++<<endl;
    cout<<"value of marks *(a+2) is "<<*a++<<endl;
    cout<<"value of marks *(a+3) is "<<*a<<endl;


    return 0;
}