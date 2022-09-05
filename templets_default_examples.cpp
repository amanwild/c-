#include<iostream>
using namespace std;
template<class t1=int,class t2=char,class t3=string>
class emp{
    public:
    t1 data1;
    t2 data2;
    t3 data3;
    emp(t1 a,t2 b,t3 c){
        data1 =a;
        data2 =b;
        data3 =c;       
    }
    void show(){
        cout<<"value of a is :"<<data1<<endl;
        cout<<"value of b is :"<<data2<<endl;
        cout<<"value of c is :"<<data3<<endl;
    }
    
};
int main(){
    emp<> aman( 5, 'A',"aman" );//this is example of default templete<>
    aman.show();
    cout<<endl;
    emp<int ,int,int> ama(24,25,26);
    ama.show();
    
    return 0;
}