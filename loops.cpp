#include <iostream>
using namespace std;
int main(){
    cout<<"hello world"<<endl;
    cout<<"0 to 10 no. print"<<endl;

    for(int i=0;i<=10;i++){
        cout<<i<<endl;
    }

    cout<<"0 to 10 no. print using while loop"<<endl;
    int a=0;
    while(a<=10){
        cout<<a<<endl;
        a++;
    }

    cout<<"0 to 10 no. print using do while loop"<<endl;
     int b=0;
    do{
        cout<<b<<endl;
        b++;
    }while(b<=10);

}