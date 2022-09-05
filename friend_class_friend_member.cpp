#include <iostream>
using namespace std;
class complex;
class calculator
{
public:
    int sum(int a, int b)
    {
        return (a + b);
    }
    int addition(complex, complex);
    int addaddition(complex, complex);
};
class complex
{
private:
    int a, b;
    // individually declaring as friend
    friend int calculator::addition(complex, complex);
    friend int calculator::addaddition(complex, complex);
    // declaring entire calculator class friend
    friend class ::calculator;

public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void getdata()
    {
        cout << "your no.is :" << a << " and " << b << endl;
    }
};
int calculator ::addition(complex b1, complex b2)
{
    return (b1.a + b2.a);
}
int calculator ::addaddition(complex b1, complex b2)
{
    return (b1.b + b2.b);
}

int main()
{
    complex aman, sahu;
    aman.setdata(3, 4);

    sahu.setdata(5, 6);

    calculator maths;
    int res = maths.addition(aman, sahu);
    cout << "sum of real part of aman and sahu is :" << res << endl;
    int resc = maths.addaddition(aman, sahu);
    cout << "sum of complex part of aman and sahu is :" << resc << endl;

    return 0;
}