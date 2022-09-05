#include <iostream>
using namespace std;
class nest
{
    string s;

public:
    void setdata(void);
    void check(void);
    void ones(void);
    void getdata(void);
};
void nest ::setdata(void)
{
    cout << "enter string in binary formate :";
    cin >> s;
}
void nest ::check(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << " string is not in binary formate";
            exit(0);
        }
    }
}
void nest ::ones(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
            
        }
        else
        {
            s.at(i) ='0';
        }
    }
}
void nest ::getdata(void)
{
    for (int i = 0; i < s.length(); i++)
    {

        cout << s.at(i);
    }
}

int main()
{
    nest st;
    st.setdata();
    st.check();
    st.ones();
    st.getdata();
    return 0;
}