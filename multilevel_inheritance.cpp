#include <iostream>
using namespace std;
class student
{
protected:
    int roll;

public:
    void setdata(int);
    void getdata();
};
void student::setdata(int a)
{
    roll = a;
}
void student::getdata()
{
    cout << "roll no. of stu is :" << roll << endl;
}

class exam : public student
{
public:
    int maths, phy;
    void setmarks(int a, int b);
    void getmarks();
};
void exam ::setmarks(int a, int b)
{
    maths = a;
    phy = b;
}
void exam ::getmarks()
{
    cout << "marks of maths :" << maths<< endl;
    cout << "marks of physics :" <<  phy << endl;
}
class result : public exam
{
    float percentage;

public:
    void show()
    {
    getmarks();
     getdata();
        cout << "your percentage is " << (maths + phy) / 2 << "%"<< endl;
    }
};
int main()
{   result aman;
aman.setdata(24);
aman.setmarks(100,98);
aman.show();

    return 0;
}