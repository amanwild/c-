#include <iostream>
using namespace std;

void callvalue(int a, int b)// these will not change swap the values of address 
{
    int temp = a;
    a = b;
    b = temp;
}

void callpointer(int *a, int *b)// these will change swap the values of address 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void callrefferance(int &a, int &b)// these will change swap the values of address 
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 5, b = 10;
    callvalue(a, b);
    cout << "a = " << a << " ,b = " << b << endl;

    callpointer(&a, &b);
    cout << "a2 = " << a << " ,b2 = " << b << endl;

    int c = 10, d = 20;
    callrefferance(c, d);
    cout << "c = " << c << " ,d = " << d << endl;

    return 0;
}