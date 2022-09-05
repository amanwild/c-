#include<iostream>
using namespace std;
class mychannel{
    public:
    int rating;
    string str;
    mychannel(string a,int r){
        rating = r;
        str = a ;       
    }
    virtual void show(){
        cout<<"title of channel is : "<<str<<endl
        <<" and rating is : "<<rating<<endl;
    }

};
class vdo : public mychannel {
    public:
    int vdolnth;
    vdo(int v, int r ,string s) : mychannel(s,r){
        vdolnth = v;
    }
    void show(){
        cout<<"title of channel is : "<<str<<endl
        <<" and rating is : "<<rating<<endl
        <<" and video length is :"<<vdolnth<<endl;
    }
};
class txt : public mychannel {
    public:
    int txtlnth;
    txt(int v, int r ,string s) : mychannel(s,r){
        txtlnth = v;
    }
    void show(){
        cout<<"title of channel is : "<<str<<endl
        <<" and rating is : "<<rating<<endl
        <<" and text length is :"<<txtlnth<<endl;
    }
};

int main(){
    string t;
    int r,vl ,tl;
    cout<<"enter channel name :"<<endl;
    cin>>t;
    cout<<"enter rating out of 10 :"<<endl;
    cin>>r;
    cout<<"enter video length :"<<endl;
    cin>>vl;
    cout<<"enter text length:"<<endl;
    cin>>tl;
    mychannel wild(t , r);
    mychannel* baseptr[2];
    vdo vido(vl,r,t);
    txt text(tl,r,t);
    baseptr[0] = &vido;
    baseptr[1] = &text;

    baseptr[0]->show();
    baseptr[1]->show();

}