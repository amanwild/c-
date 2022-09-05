#include <iostream>
using namespace std;
int main()
{
    // cout<<"hello world";

    int age;
    cout << "enter your age :";
    cin >> age;

    if (age < 5)
    {
        cout << "you are a kid" << endl;
        cout << "and your age is :" << age << endl;
    }
    else if (age < 10)
    {
        cout << "your a mature now" << endl;
        cout << "and your age is :" << age << endl;
    }
    else if (age < 15)
    {
        cout << "your a teenager now";
        cout << "and yo ur age is :" << age << endl;
    }
    else if (age < 20)
    {
        cout << "you are now valid for driving" << endl;
        cout << "and yo ur age is :" << age << endl;
    }
    else
    {
        cout << "you are adult now" << endl;
    }

    switch (age)
    {
    case 10:
        cout << "you are 10 year old kid" << endl;
        cout << "and your age is :" << age << endl;
        break;

    case 5:
        cout << "your a 5 yrear old now" << endl;
        cout << "and your age is :" << age << endl;
        break;
    case 15:
        cout << "your a teenager(15) now";
        cout << "and yo ur age is :" << age << endl;
        break;

    case 25:
        cout << "you are now valid for(25) driving" << endl;
        cout << "and yo ur age is :" << age << endl;
        break;
    default:
        cout << "you are adult now" << endl;
    }

    return 0;
}