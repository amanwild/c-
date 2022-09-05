#include <iostream>
using namespace std;

class simplecalaculator
{
protected:
public:
    int a, b;
    void setdata(int a, int b)
    {
        a = a;
        b = b;
    }
    void sum(int a, int b);
    void sub(int a, int b);
    void mul(int a, int b);
    void div(int a, int b);
};

void simplecalaculator ::sum(int a, int b)
{
    int result = a + b;
    cout << "sum of " << a << " and " << b << " is : " << result << endl;
}
void simplecalaculator ::sub(int a, int b)
{
    int result = a - b;
    cout << "sub of " << a << " and " << b << " is : " << result << endl;
}
void simplecalaculator ::mul(int a, int b)
{
    int result = a * b;
    cout << "mul of " << a << " and " << b << " is : " << result << endl;
}
void simplecalaculator ::div(int a, int b)
{
    int result = a / b;
    cout << "div of " << a << " and " << b << " is : " << result << endl;
}

int main()
{
    int a, b, s;
    simplecalaculator problem;
    cout << "two no. which will be perform operation ";
    cin >> a >> b;
    problem.setdata(a, b);
    while (0 < s < 5 || s != 0)
    {
    cout << "choose which operation you want to perform" << endl
         << "1) sum" << endl
         << "2) sub" << endl
         << "3) mul" << endl
         << "4) div" << endl;
        cout << "to exit press 0 :";
    cin >> s;
        if (s == 0)
        {
            exit(0);
        }
        switch (s)
        {

        case 1:
            problem.sum(a, b);
            break;
        case 2:
            problem.sub(a, b);
            break;
        case 3:
            problem.mul(a, b);
            break;
        case 4:
            problem.div(a, b);
            break;

        default:

            cout << "invalid input is given" << endl;
            break;
        }
    }
}