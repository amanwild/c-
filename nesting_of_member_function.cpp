#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
};
void binary ::read(void)
{
    cout << "enter bin no." << endl;
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "this is not binary formate" << endl;
            exit(0);
        }
    }
}
void binary ::ones(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
           s.at(i) ='1';
        }
        else
        {
           s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
        cout <<"binary formate is "<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;

}
main()
{
    binary b;
    b.read();
    b.chk_bin();
 
    b.ones();
    b.display();

    return 0;
}