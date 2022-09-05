#include<iostream>
using namespace std;

int main(){
  
    int a =5;
    int *p=&a;
    cout<<"value is :"<<*p<<endl;   

    //___________________________________new keyword________________________________________
    int *array = new int[3];
    array[0]=10;
    array[1]=20;
    array[2]=30;
    cout<<"value of array[0] is :"<<array[0]<<endl;   
    cout<<"value of array[1] is :"<<array[1]<<endl;   
    cout<<"value of array[2] is :"<<array[2]<<endl;   
    delete[] array;
    cout<<"value of array[0] after delete data  is :"<<array[0]<<endl;   
    return 0;
}