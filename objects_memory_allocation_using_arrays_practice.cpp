#include <iostream>
using namespace std;
class shop
{
    int id[100], price[100], counter;
    int static i;

public:
    void init() { counter = 0 ;}
    void setdata();
    void getdata();
};
void shop :: setdata()
{
    cout << "enter id of " << counter + 1 << " : " << endl;
    cin >> id[counter];

    cout << "enter price of " << counter + 1 << " : " << endl;
    cin >> price[counter];
    counter++;
}
void shop :: getdata()
{
    for (int static i; i < counter; i++)
    {
        cout << "price of id " << id[i] << " is :" << price[i]<<endl;
    };
}
int shop ::i;
int main()
{   int que;
    shop dukan;
    dukan.init();
    cout<<"how many items :"<<endl;
    cin>>que;
    for (int i = 0; i < que; i++)
    {
        dukan.setdata();
    }
    dukan.getdata();
    
   

    return 0;
}