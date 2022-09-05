#include <iostream>
using namespace std;
class shop
{
    int itemprice[100];
    int itemid[100];
    int counter;
    int static i ;
public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void display(void);
};
void shop ::setprice(void)
{
    cout << "enter price of your item no " << counter + 1 << " :";
    cin >> itemprice[counter];
    cout << "enter id of your item no " << counter + 1 << " :";
    cin >> itemid[counter];
    counter++;
}

void shop ::display(void)
{
    for (int static  i; i <counter; i++)
    {
        cout << " price of your item id " << itemid[i] << " is : " << itemprice[i] << endl;
    }
    ;
}
int shop :: i;

int main()
{
    int que;
    cout << "how many items you have?" << endl;
    cin >> que;

    shop dukan;
    dukan.initcounter();
    
    for (int a = 0; a < que; a++)
    {
        dukan.setprice();       
    };
     dukan.display();

    return 0;
}