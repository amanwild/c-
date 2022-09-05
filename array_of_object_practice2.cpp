#include <iostream>
using namespace std;
class emp
{
protected:
    int id;
    int static s;

public:
    void set()
    {
        cout << "enter the id of employee no." << ++s << " = ";
        cin >> id;
    }
    void get()
    {

        cout << "id of employee no." << s << " is =" << id << endl;
    }
};
int emp ::s;
int main()
{
    emp em[3];
    for (int i = 0; i < 3; i++)
    {
        em[i].set();
        em[i].get();
    }

    return 0;
}