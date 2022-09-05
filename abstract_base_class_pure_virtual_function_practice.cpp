#include<iostream>
using namespace std;
class cwh{
    protected:
    string title;
    float rating;
    public:
    cwh(string s,float r){
        title =s;
        rating =r;
    }
    virtual void show ()=0;//do nothing ... this is pure virtual function 
    //it is used to enforce to derived classes to create show() function. 
};
//after creating pure virtual function class cwh is become abstract base class 
//cause class cwh do nothing and enforces the derived class to do something
//abstract  base class cannot use to create objcts but to inherite new class form it
class txt : public cwh{
    int word;
    public:
    txt(int w ,string s,float r):cwh(s,r){
        word = w;
    }
    void show(){
        cout<<"this cwh title is "<<title<<endl;
        cout<<"this cwh text length is "<<word<<endl;
        cout<<"this cwh rating is "<<rating<<endl<<endl;
    }
};
class vdo : public cwh{
    int vdo_len;
    public:
    vdo(int v ,string s,float r):cwh(s,r){
        vdo_len = v;
    }
    void show(){
        cout<<"this cwh title is "<<title<<endl;
        cout<<"this cwh  vdo length is "<<vdo_len<<endl;
        cout<<"this cwh rating is "<<rating<<endl<<endl;
    }
};
int main(){
    string  t="Aman Sahu is there";
    int w =20,v=30;
    float r=4.5;

    txt obj_txt(w,t,r);
    vdo obj_vdo(v,t,r);
    cwh* aman[2];
    aman[0]=&obj_txt;
    aman[1]=&obj_vdo;
    aman[0] ->show();
    aman[1] ->show();

    return 0;
}