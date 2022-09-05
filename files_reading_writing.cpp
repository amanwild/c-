#include<iostream>
using namespace std;
#include<fstream>
int main(){
    string s="welcome";
    string s2,s3;
    ofstream out("sample.txt");//opening files using constructor
    out<<s<<endl;//writing operation

    ifstream in("sample2.txt");//opening files using constructor
    in>>s2; //reading operation
    cout<<s2<<endl;
    
    ifstream in2("sample2.txt");//opening files using constructor
    getline(in2,s3 ); //reading operation
    getline(in2,s3 ); //reading operation
    cout<<s3<<endl;
    return 0;

}