#include <iostream>
using namespace std;
#include <fstream>
#include <string>
int main()
{
    string st;

    ofstream out("sample.txt");
    out << "this is my laptop" << endl;
    out << "this is my phone" << endl;
    out << "this is my charger" << endl;
    out << "this is my headphone" << endl;
    out.close();

    ifstream in;
    in.open("sample.txt");
    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st<<endl;
    }

    in.close();

    return 0;
}