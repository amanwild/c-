#include <iostream>
using namespace std;
class shop
{
protected:
    int id, price;
    int static s;

public:
    
    void setdata(int p, int q)
    {
        id = p;
        price = q;
    }
    void getdata()
    {
        cout << "id of your item no. ("<<++s<<") is " << id <<endl;
        cout << "price of your item no. ("<<s<<") is " << price<<endl ;
    }
};
int shop :: s;
int main()
{
    int a,p,q;
    cout << "enter no. of itmes :" ;
    cin >> a;
  
    //int *array = new int[a];
    // shop* aman = new shop[a];//here a no. of obj are created
    shop* aman=new shop[a]; 
    shop* sahu = aman;
    for (int i = 0; i < a; i++)
    {
    cout << "enter   id  of itme no. ("<<i+1<<") :" ;
    cin>>p;
    cout << "enter price of itme no. ("<<i+1<<") :" ;
    cin>>q;
        (*aman).setdata(p,q);
        // aman->setdata(p, q);
        aman++;         //++ karne se pointer next obj ko point krenga
    }
    for (int j = 0; j < a; j++)
    {
         sahu->getdata();
         sahu++;       //++ karne se pointer next obj ko point krenga
    }

    
}