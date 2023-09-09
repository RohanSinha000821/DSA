#include<iostream>
#include<math.h>
using namespace std;
void fib(int n){
    int t1 = 0;
    int t2 = 1;
    int nextTerm;
    for (int i = 0; i < n; i++)
    {
        cout<<t1<<" ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    
}

int fact(int n){
    int f = 1;
    for (int i = 2; i <= n; i++)
    {
        f = f *i;
    }
    return f;
}

int main(){
    int n;
    cin>>n;
    

    // Prime number or not


    // bool flag = 0;

    // for (int i = 2; i <= sqrt(n); i++)
    // {
    //     if (n%i==0)
    //     {
    //         cout<<"Non-prime"<<endl;
    //         flag = 1;
    //         break;
    //     }
        
    // }
    // if (flag == 0)
    // {
    //     cout<<"Prime";
    // }
    
    // Reverse of a number

    // int temp;
    // int reverse_Num = 0;
    // while (n>0)
    // {
    //     temp = n%10;
    //     reverse_Num = reverse_Num*10 + temp;
    //     n = n/10;
    // }
    // cout<<reverse_Num;

    

    // Armstrong number
    // int temp = n;
    // int sum = 0;
    // while(n>0)
    // {
    //     int lastDigit = n%10;
    //     sum = sum + (lastDigit)*(lastDigit)*(lastDigit);
    //     n=n/10;
    // }
    // cout<<sum<<endl;
    // if (sum==temp)
    // {
    //     cout<<"Armstrong number";
    // }
    // else{
    //     cout<<"Not Armstrong";
    // }

    // Fibonacci series
    // fib(n);
    

    // Pascal's Triangle
    int coef;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            // if (j==0)
            // {
            //     coef = 1; 
            // }
            // else{
            //     coef = coef * (i-j+1)/j;
            // }
            coef = fact(i)/(fact(i-j)*fact(j));
            cout<<coef<<" ";
        }
        cout<<endl;
    }
    return 0;
}