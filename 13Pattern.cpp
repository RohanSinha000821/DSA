#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    // My Method
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= 2*n; j++)
    //     {
    //         if (j==1 || j==i || j==2*n || j==2*n-i+1)
    //         {
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= 2*n; j++)
    //     {
    //         if (j==1 || j==i || j==2*n || j==2*n-i+1)
    //         {
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= i ; j++)
        {
            if (j==1 || j==i)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        int space = 2*n - 2*i;
        for (int j = 1; j<= space; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i ; j++)
        {
            if (j==1 || j==i)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
 
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i ; j++)
        {
            if (j==1 || j==i)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        int space = 2*n - 2*i;
        for (int j = 1; j<= space; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i ; j++)
        {
            if (j==1 || j==i)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    
    return 0;
}