#include <iostream>
using namespace std;
class emp
{

public:
    int id;
    int no;
  emp(int a)
    {
        id=a;     
    // }
    // void get()
    // {
        cout<<"thid is id in emp  " << id << endl;
    }
    emp(){}
};
// syntex for inheritance is __________________________________________
// class <<childclassname>> : <<visibility mode>> <<parentclassname>>
// if visisblity mode is absent then default mode is privet
class pro : emp
{
public:
   pro(int idp)
    {
       
        id = idp+5;
    // }
    // void get()
    // {
        // cout<<"this is from pro " << no << endl;
        cout <<"this is from pro id "<< id << endl;
        // cout <<"this is from pro "<< id << endl;
    }
};
int main()
{
    emp e(5);
  
    // e.get();
   
    pro p(50);
    // p.get();

    return 0;
}