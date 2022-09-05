#include<iostream>
using namespace std;
#include<fstream>
int main(){
    string same,sory;

    cout<<"enter your name :"<<endl;
    cin>>same;
    cout<<same<<endl;

    ofstream out("sample.txt");
    out<<"my name is : "<<same<<endl;
    out.close();

    ifstream in("sample.txt");
    getline(in,sory);
    cout<<sory<<endl;
    in.close();

    return 0;
}