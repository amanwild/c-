#include<iostream>
using namespace std;

int main(){
    
    int marks[]={52,63,63,63};
    cout<<"marks of 1 students are :"<<marks[0]<<endl;
    cout<<"marks of 2 students are :"<<marks[1]<<endl;
    cout<<"marks of 3 students are :"<<marks[2]<<endl;
    cout<<"marks of 4 students are :"<<marks[3]<<endl<<endl;

    cout<<"using for loop"<<endl;
    for (int i = 0; i <4; i++)
    {
        cout<<"marks of "<<i<<" students are :"<<marks[i]<<endl;
    }
    

    cout<<endl<<"using while loop"<<endl;
    int b=0,a=0;
    while(a<4){
         cout<<"marks of "<<a<<" students are :"<<marks[a]<<endl;
        a++;
    }
    

    cout<<endl<<"using do while loop"<<endl;
    do{
        cout<<"marks of "<<b<<" students are :"<<marks[b]<<endl;
        b++;
    }while(b<4);
    return 0;
}