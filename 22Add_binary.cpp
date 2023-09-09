#include <bits/stdc++.h>
using namespace std;
int rev(int n)
{
    int ans = 0;
    while (n > 0)
    {
        int temp = n % 10;
        ans = ans * 10 + temp;
        n = n / 10;
    }
    return ans;
}
int AddBinary(int a, int b)
{
    int ans = 1, prevCarry = 0;
    while (a > 0 && b > 0)
    {
        if (a % 2 == 0 && b % 2 == 0)
        {
            if (prevCarry == 1)
            {
                ans = ans *10 + 1;
                prevCarry = 0; 
            }
            else{
                ans = ans *10 + 0;
            }
        }
        else if ((a % 2 == 0 && b % 2 == 1) || (a % 2 == 1 && b % 2 == 0))
        {
            if (prevCarry == 1)
            {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
        }
        else if(a%2 == 1 && b%2 == 1)
        {
            if (prevCarry == 1)
            {
                ans = ans * 10 +1;
                prevCarry = 1;
            }
            else{
                ans = ans *10 + 0;
                prevCarry = 1;
            }
            
        }

        a /= 10;
        b /= 10;
    }

    while (a > 0)
    {
        if (prevCarry == 1)
        {
            if (a % 2 == 1)
            {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevCarry = 0;
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
        if (prevCarry == 1)
        {
            if (b % 2 == 1)
            {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + (b % 2);
        }
        b /= 10;
    }
    if (prevCarry == 1)
    {
        ans = ans * 10 + 1;
    }
    ans = rev(ans);
    return ans/10;
}
int main()
{
    int b1, b2;
    cin >> b1;
    cin >> b2;
    cout << AddBinary(b1, b2);
    return 0;
}