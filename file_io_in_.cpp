#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    string a=" aman bhai \n"
    " tussi great ho";
    ofstream out("sample.txt");
    out<<a;
    out.close();

    string b,c;
    ifstream in("sample.txt");
    // in>>b>>c;
    // cout<<b<<c;
    while (in.eof()==0)
    {
        getline(in,b);
        cout<<b<<endl;
    }
    
    in.close();
    return 0 ;
}