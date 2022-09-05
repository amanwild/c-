#include<iostream>
using namespace std;

int main(){
    cout<<"this is break ex."<<endl;
    for (int i = 0; i < 6; i++)
    {
       if(i==2){
           break;
       }
       cout<<i<<endl;
    }
    cout<<"this is continue ex."<<endl;
    for (int a = 0; a < 6; a++)
    {
       if(a==2){
           continue;
       }
       cout<<a<<endl;
    }
    
    return 0;
}