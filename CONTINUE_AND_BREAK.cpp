#include<iostream>
using namespace std;

int main(){
    for (int m = 1; m<= 10 ;m++){
        if(m%2!=0){
            // continue is used to skip to the next iteration
            continue;
        }
        cout<<"go to party"<<m<<endl;
    }
    for (int m = 1; m<100 ;m++){
        if(m>5){
            // bresk is used to terminate loop
           break;
        }
        cout<<"go to nightout"<<m<<endl;
    }
    return 0;
}