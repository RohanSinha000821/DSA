//#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int rev(int n)
{
    int rev;
    while (n > 0)
    {
        int temp = n % 10;
        rev = rev * 10 + temp;
        n /= 10;
    }
    return rev;
}
string rev(string n)
{
    string rev;
    for (int i = n.size()-1; i >=0; i--)
    {
        rev = rev + n[i];
    }
    
    return rev;
}
int binaryToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans = ans + x * y;
        x *= 2;
        n = n / 10;
    }
    return ans;
}
int octalToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans = ans + x * y;
        x *= 8;
        n = n / 10;
    }
    return ans;
}
int hexadecimalToDecimal(string n)
{
    int ans = 0;
    int x = 1;
    int size = n.size();
    for (int i = size - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans = ans + x * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans = ans + x * (n[i] - 'A' + 10);
        }
        x = x * 16;
    }

    return ans;
}

// My method
// int DecimalToBinary(int n)
// {
//     int ans = 0;
//     int x = 1;
//     while (n > 0)
//     {
//         int t = n % 2;
//         ans = ans * 10 + t;
//         n = n / 2;
//     }
//     ans = rev(ans);
//     return ans;
// }
// int DecimalToOctal(int n)
// {
//     int ans = 0;
//     int x = 1;
//     while (n > 0)
//     {
//         int t = n % 8;
//         ans = ans * 10 + t;
//         n = n / 8;
//     }
//     ans = rev(ans);
//     return ans;
// }
// string DecimalTohexadecimal(int n)
// {
//     string ans = "";
//     int x = 1;
//     while (n > 0)
//     {
//         int t = n % 16;
//         if (t <= 9)
//         {
//             ans = ans + to_string(t);
//         }
//         else
//         {
//             ans.push_back('A' + t - 10);
//         }
//         n = n / 16;
//     }
//     ans = rev(ans);
//     return ans;
// }

int DecimalToBinary(int n)
{
    int ans=0;
    int x = 1;
    while (x <= n)
    {
        x *= 2;
    }
    x /= 2;
    while (x > 0)
    {
        int lastDigit = n / x;
        n -= lastDigit * x;
        x /= 2;
        ans = ans * 10 + lastDigit;
    }
    return ans;
}
int DecimalToOctal(int n)
{
    int ans=0;
    int x = 1;
    while (x <= n)
    {
        x *= 8;
    }
    x /= 8;
    while (x > 0)
    {
        int lastDigit = n / x;
        n -= lastDigit * x;
        x /= 8;
        ans = ans * 10 + lastDigit;
    }
    return ans;
}

/*
(100)---->octal

while--> x=1 (1<=100) , x=8(8<=100) , x = 64(64<=100) , x = 64*8(64*8<=100(false))-->loop exits
x/=8 ;----> x=64*8/8 , x = 64

while
1st iteration
lastdigit = 100/64 = 1
n = 100 - lastDigit*x , n = 100-64=36
x = x/8, x=8
ans = 0 *10 + lastDigit , n = 0+ 1= 1;

2nd iteration
lastdigit = 36/8 = 4
n = 32 - lastDigit*x , n = 36 - 4*8 = 4
x = 8/8 = 1
ans = 1 *10 + 4 , n = 10 + 4 = 14;

3rd iteration
lastdigit = 4/8 = 4
n = 4 - lastDigit*x , n = 4 - 4*1 = 0
x = 1/8 = 0
ans = 14 *10 + 4 , n = 140 + 4 = 144;
*/

string DecimalTohexadecimal(int n)
{
    string ans = "";
    int x = 1;
    while (x <= n)
    {
        x *= 16;
    }
    x /= 16;
    while (x > 0)
    {
        int lastDigit = n / x;
        n -= lastDigit * x;
        x /= 16;
        if (lastDigit<=9)
        {
            ans = ans + to_string(lastDigit);
        }
        else{
            ans.push_back('A'+lastDigit-10);
        }
    }
    return ans;
}

int main()
{
    // string n; //--> For hexdecimalToDecimal
    int n;
    cin >> n;

    // cout<< binaryToDecimal(n)<<endl;
    // cout<< octalToDecimal(n)<<endl;
    // cout<< hexadecimalToDecimal(n)<<endl;
    // cout << DecimalToBinary(n) << endl;
    // cout << DecimalToOctal(n) << endl;
    cout << DecimalTohexadecimal(n) << endl;
    return 0;
}