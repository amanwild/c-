#include<iostream>
using namespace std;

//union is used to  memory efficiently ...
//union cosider one data structue at a time 
union money
{
    int rice;
    char car;
    float pound;
};


struct empployee
{   int id;
    char favChar;
    float per;
};

//by adding typedef we can short employee to short form like ep,emp
// typedef struct empployee
// {   int id;
//     char favChar;
//     float per;
// } emp;

int main(){
    empployee aman;
    empployee ama;
    empployee am;
    aman.id = 24;
    aman.favChar = 'a';
    aman.per = 100;
    cout<< aman.id<<endl<< aman.favChar<<endl<<aman.per<<endl<<endl;

    ama.id = 25;
    ama.favChar = 'b';
    ama.per = 200;
    cout<< ama.id<<endl<< ama.favChar<<endl<<ama.per<<endl<<endl;

    am.id = 26;
    am.favChar = 'c';
    am.per = 300;
    cout<< am.id<<endl<< am.favChar<<endl<<am.per<<endl<<endl;

    money samir;
    samir.rice=123;
    // samir.car='c'; //at one time we can use only one union 
    // samir.pound=10.5;
    cout<<"example of union "<<samir.rice<<endl;
    // cout<<endl<<samir.car<<endl;
    // cout<<endl<<samir.pound<<endl;


// enum is used to efficient memory use by converting enum values into numbers
    enum meal {breakfast,lunch,dinner};
    cout<<endl<<"example of enum "<<breakfast<<endl;
    cout<<"example of enum "<<lunch<<endl;
    cout<<"example of enum "<<dinner<<endl;
    return 0;
}