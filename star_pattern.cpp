#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter row no. :";
    cin >> a;
    cout << "enter column no. :";
    cin >> b;
    // for (int i = 0; i < a; i++)
    // {
    //     for (int j = 0; j < b; j++)
    //     {
    //         cout<<" * ";
    //     }
    //     cout<<endl;

    // }
    for (int i = a; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            if (i == 1 || i == a || j == 1 || j == b)
            {
                cout << " * ";
            }
            else
            {
                cout << "  ";
            }
            cout << endl;
        }

        return 0;
    }
}