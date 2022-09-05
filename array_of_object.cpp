#include <iostream>
using namespace std;
class employee
{
    int id;
    static int c;

public:
    int setid()
    {
        cout << "enter id of employee no.of "<<++c<<" :";
        cin >> id;
    }
    int getid()
    {
        cout << "id of employee no. "<<c<<" is " << id<<endl;
    }
};
int employee :: c;//remember the declaration of static veriables
int employee :: c;//remember the declaration of static veriables
int employee :: c;//remember the declaration of static veriables


int main()
{
    employee group[3];
    for (int i = 0; i < 3; i++)
    {
        group[i].setid();
        group[i].getid();
    }

    return 0;
}