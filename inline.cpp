#include<iostream>
using namespace std;

inline int product(int a,int b){
    return a*b;
}
//these inline function is not used when static variable  is there
// static variable execute only once at stating of execution 
//ex. static int c = 0 ;//these execute only once 
//c = c + 1; //next time function runs, value of c will retained
// inline function execute function and place result to the where function call is placed 

int main(){
    int a,b;
    cout<<"enter first no.: "<<endl;
    cin>>a;
    cout<<"enter second no.: "<<endl;
    cin>>b;
    cout<<"product is .: "<<product(a,b)<<endl;    
    cout<<"product is .: "<<product(a,b)<<endl;    
    cout<<"product is .: "<<product(a,b)<<endl;    
    cout<<"product is .: "<<product(a,b)<<endl;    
    cout<<"product is .: "<<product(a,b)<<endl;    
    cout<<"product is .: "<<product(a,b)<<endl;    
    cout<<"product is .: "<<product(a,b)<<endl;    
    cout<<"product is .: "<<product(a,b)<<endl;    
    cout<<"product is .: "<<product(a,b)<<endl;    
    cout<<"product is .: "<<product(a,b)<<endl;    
    cout<<"product is .: "<<product(a,b)<<endl;    
    cout<<"product is .: "<<product(a,b)<<endl;    
    cout<<"product is .: "<<product(a,b)<<endl;    
    cout<<"product is .: "<<product(a,b)<<endl;    
    cout<<"product is .: "<<product(a,b)<<endl;    
    cout<<"product is .: "<<product(a,b)<<endl;    
    cout<<"product is .: "<<product(a,b)<<endl;    
    cout<<"product is .: "<<product(a,b)<<endl;    
    cout<<"product is .: "<<product(a,b)<<endl;    
    cout<<"product is .: "<<product(a,b)<<endl;    
  
    return 0;
}