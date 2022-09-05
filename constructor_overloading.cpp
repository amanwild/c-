#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void get()
    {
        cout << "value of complex  is :" << a << " + " << b << "i ." << endl;
    }
    //this is parameterized constructor couse it takes parameteres ie. int a1,int b1;
    complex()
    {
        a = 0;
        b = 0;
    }
     complex(int a1)
    {
        a = a1;
        b = 0;
    }
    complex(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
};

int main()
{
    complex lol;
    lol.get();
    complex sun(6);
    sun.get();
    complex com(5, 10);
    com.get();

    return 0;
}