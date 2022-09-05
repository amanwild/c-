#include<iostream>
using namespace std;
class base{
    public:
    int base_var;
    void show( ){
        
        cout<<"variables of base class is :"<<base_var<<endl;
    }
};
class derived :public base{
    public:
    int derived_var;
    void show(  ){
      
        cout<<"variables of derived class is :"<<derived_var<<endl;
    }
};
int main(){
    base base_obj,*base_pointer;
 
    derived derived_obj,*derived_pointer;
   
    base_pointer = & derived_obj;//pointing base class pointer to derived class
    base_pointer->base_var=50;
    base_pointer->show();

    // base_pointer->derived_var=50;//we can run only those the function members who are derived in derived class
    //but we can access to function members of base class using pointer of derived class who points to derived obj
    
    derived_pointer = & derived_obj;//pointing derived class pointer to derived class
         derived_pointer->derived_var=100;
    derived_pointer->show();
    return 0;
}