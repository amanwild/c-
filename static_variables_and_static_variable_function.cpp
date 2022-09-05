#include <iostream>
using namespace std;
class employee
{
    static int count; //static veriables have default value 0 this is static veriables
    int id;

public:
    void setdata(void)
    {
        cout << "enter id of  employee no. " << ++count << " : ";
        cin >> id;
    }
    void getdata(void)
    {
        cout << "id of employee no. " << count << " is " << id << endl;
    }

    static void getcount(void)//this static function contains only static variables
    {
        cout << "value of count is  is : " << count++<<endl;
    }
};
int employee ::count;
int main()
{
    employee aman;
    employee sahu;
    employee samir;

    aman.setdata();
    aman.getdata();
    aman.getcount();
    sahu.setdata();
    sahu.getdata();
    sahu.getcount();
    samir.setdata();
    samir.getdata();
    samir.getcount();


    return 0;
}