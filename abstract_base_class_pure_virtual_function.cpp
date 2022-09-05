#include <iostream>
using namespace std;
class cwh //this is abstract base class which is used to use only for creating new class ie. inherit class
{
protected:
    string title; //in abstract base class at lest one virtual function should be exist 
    float rating;

public:
    cwh(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void show()=0;//___________this is pure virtual function__this function forced to run in derived class 
};
class video : public cwh
{
public:
    float vdolnth;
    video(float l, string s, float r) : cwh(s, r)
    {
        vdolnth = l;
    }
    void show()
    {
        cout << "video title is :" << title << endl;
        cout << "video rating is :" <<rating<< endl;
        cout << "video length is :" <<vdolnth<< endl<<endl;
    }
};
class tet : public cwh
{

public:
    int textlnth;
    tet(int t, string s, float r) : cwh(s, r)
    {
        textlnth = t;
    }
    void show()
    {
        cout << "text title is :" << title<< endl;
        cout << "text rating is :" <<rating<< endl;
        cout << "text length is :" <<textlnth<< endl<<endl;
    }
};
int main()
{ float vdolength=50.5,rating=5.5;
    int word=200;
    string title="aman sahu";

    // cwh obj_cwh(title,rating),*pointer_cwh;
    // pointer_cwh=&obj_video,&obj_text;
    video obj_video(vdolength ,title,rating);    
    tet obj_text(word,title,rating);

    cwh* aman[2];
    aman[0]=&obj_video;
    aman[1]=&obj_text;
    aman[0]->show();

    aman[1]->show();    

    return 0;
}