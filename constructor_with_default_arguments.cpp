#include <iostream>
using namespace std;
class complex
{
    int a,  c,b;

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
     
    complex(int a1, int b1=5)
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
   
 
    return 0;
}