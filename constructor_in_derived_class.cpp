#include <iostream>
using namespace std;
class base1
{
    int a;

public:
    base1(int x)
    {
        a = x;
        cout << "value of a in base1 is :" << a << endl;
    }
};
class base2
{
    int b;

public:
    base2(int x)
    {
        b = x;
        cout << "value of b in base2 is :" << b << endl;
    }
};
class derived : public base1, public base2
{
    int d1, d2;

public:
    derived(int p, int q, int r, int s) : base1 (p), base2 (q)
    {
        d1 = r;
        d2 = s;
        cout << "value of d1 and d2 in derived is :" << d1 <<" and "<< d2 << endl;
    }
};
int main(){
    derived beta(10,20,30,40);
}