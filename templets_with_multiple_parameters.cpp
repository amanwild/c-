#include<iostream>
using namespace std;
template<class t1,class t2,class t3,class t4>
class emp{
    public:
    t1 data1 ;
    t2 data2 ;
    t3 data3 ;
    t4 data4 ;
    emp(t1 a,t2 b,t3 c,t4 d){
           data1 = a ;
     data2 =  b;
     data3 =  c;
     data4 =  d;
    }
    void show(){
        cout<<data1<<endl
        <<data2<<endl
        <<data3<<endl
        <<data4<<endl;
    }
};
int main(){
    emp<int ,float,char,string> ama(24,99.9,'A',"AMAN_SAHU");
    ama.show();

    
    return 0;
}