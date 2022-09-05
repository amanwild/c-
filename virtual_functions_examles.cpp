#include <iostream>
using namespace std;
class cwh
{
protected:
    string title;
    float rating;

public:
    cwh(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void show() {}
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
        cout << "video length is :" <<vdolnth<< endl;
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
        cout << "text length is :" <<textlnth<< endl;
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