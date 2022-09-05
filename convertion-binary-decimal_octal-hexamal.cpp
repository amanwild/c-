#include <bits/stdc++.h>
using namespace std;
int bintodec(int a)
{
    int s = 1;
    int y = 0;
    int ans = 0;
    while (a > 0)
    {
        ans = a % 10;
        y += ans * s;
        a /= 10;
        s *= 2;
    }

    return y;
}
int octaltodec(int x)
{
    int a = 0;
    int b = 1;
    int ans = 0;

    while (x > 0)
    {
        a = x % 10;
        ans += a * b;
        b *= 8;
        x /= 10;
    }

    return ans;
}

int hexadecimaltodecimal(string a)
{
    int x = 1;
    int d = 0;
    int siz = a.size();
    for (int i = siz - 1; i >= 0; i--)
    {
        if (a[i] >= '0' && a[i] <= '9')
        {
            d += x * (a[i] - '0');
        }
        else if (a[i] >= 'A' && a[i] <= 'F')
        {
            d += x * (a[i] - 'A' + 10);
        }
        x *= 16;
    }
    return d;
}
int decimaltobinary(int a)
{
    int x = 1;
    int d = 0;
    int ans = 0;
    while (x<=a){
        x*=2;
    }
    x/=2;
    int last;
    while (x>0)
    {
        last =a/x;
        a-=last*x;
        x/=2;
        ans =ans*10+last;
    }    
    return ans;
}

int decimaltooctal(int a)
{
    int x = 1;
    int d = 0;
    int ans = 0;
    while (x<=a){
        x*=8;
    }
    x/=8;
    int last;
    while (x>0)
    {
        last =a/x;
        a-=last*x;
        x/=8;
        ans =ans*10+last;
    }    
    return ans;
}

string decimaltohexadecimal(int a)
{
    int x = 1;
    int d = 0;
    string ans = "";
    while (x<=a)
    {
        x*=16;
    }
    x/=16;
    while (x>0)
    {
        int last = a/x;
        a-=last*x;
        x/=16;
        if (last<=9){
            ans= ans+to_string(last);
        }
        else{
            char c='A'+last-10;
            ans.push_back(c);
        }   
    }
    return ans;
}
int main()
{
    cout << bintodec(101) << endl;
    cout << octaltodec(17)<<endl;
    cout << hexadecimaltodecimal("1CF")<<endl;
    cout << decimaltobinary(10)<<endl;
    cout << decimaltooctal(100)<<endl;
    cout << decimaltohexadecimal(100)<<endl;


    return 0;
}