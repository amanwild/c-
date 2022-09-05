#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int reverse(int z)
{
    int next = 0;
    int ans = 0;
    while (z > 0)
    {
        next = z % 10;
        ans = ans * 10 + next;
        z /= 10;
    }
    return ans;
}
int additionofbinary(int a, int b)
{
    int x = 1;
    int carry = 0;
    int ans = 0;
    while (a > 0 && b > 0)
    {
        if (a % 2 == 0 && b % 2 == 0)
        {
            ans = ans * 10 + carry;
            carry = 0;
        }
        else if ((a % 2 == 1 && b % 2 == 0) || (a % 2 == 0 && b % 2 == 1))
        {
            if (carry == 1)
            {
                ans = ans * 10;
                carry = 1;
            }
            else
            {
                ans = ans * 10 + carry;
                carry = 0;
            }
        }
        else
        {
            ans = ans * 10 + carry;
            carry = 1;
        }
        a /= 10;
        b /= 10;
    }

    while (a > 0)
    {
        if (carry == 1)
        {
            ans = ans * 10;
            carry = 1;
        }
        else
        {
            ans = ans * 10 + 1;
            carry = 0;
        }
        if (carry == 1)
        {
            if (a % 2 == 1)
            {
                ans = ans * 10;
                carry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                carry = 0;
            }
        }
        else
        {
            ans = ans * 10 + (a % 2);
        }
        a /= 10;
    }

    while (b > 0)
    {
        if (carry == 1)
        {
            ans = ans * 10;
            carry = 1;
        }
        else
        {
            ans = ans * 10 + 1;
            carry = 0;
        }
        if (carry == 1)
        {
            if (b % 2 == 1)
            {
                ans = ans * 10;
                carry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                carry = 0;
            }
        }
        else
        {
            ans = ans * 10 + (b % 2);
        }
        b /= 10;
    }
    if (carry == 1)
    {
        ans = ans * 10 + 1;
    }
    // ans = reverse(ans);

    return ans;
}
int main()
{
    cout << additionofbinary(10,10) << endl;
    return 0;
}