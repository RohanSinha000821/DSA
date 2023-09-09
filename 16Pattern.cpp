#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    //Q1
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (j<n-i+1)
    //         {
    //             cout<<" ";
    //         }
    //         else{
    //             cout<<"*";
    //         }
            
    //     }
    //     for (int j = 2; j <=n; j++)
    //     {
    //         if (j<=i)
    //         {
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
        
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (j>=i)
    //         {
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
            
    //     }
    //     for (int j = 2; j <=n; j++)
    //     {
    //         if (j<=n-i+1)
    //         {
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
        
    // }
    
    // Q1(Alternate method)
    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = 1; j <=n-i; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = 1; j <= 2*i-1; j++)
    //     {
    //         cout<<"*";
    //     }
        
    //     cout<<endl;
    // }
    
    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = 1; j <i; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = 1; j <= 2*n-2*i+1; j++)
    //     {
    //         cout<<"*";
    //     }
        
    //     cout<<endl;
    // }


    //Q2
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= 2*n; j++)
    //     {
    //         if (j==n-i+1||j==n+i-1)
    //         {
    //             cout<<"*";
    //         }
            
    //         else{
    //             cout<<" ";
    //         }
            
    //     }
    //     cout<<endl;
        
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <=2*n; j++)
    //     {
    //         if (j==i || j== 2*n-i)
    //         {
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
        
    // }


    // Q3
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (j<=n-i+1)
    //         {
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
            
    //     }
    //     for (int j = 2; j <=n; j++)
    //     {
    //         if (j<i)
    //         {
    //             cout<<" ";
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
        
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (j>i)
    //         {
    //             cout<<" ";
    //         }
    //         else{
    //             cout<<"*";
    //         }
            
    //     }
    //     for (int j = 2; j <=n; j++)
    //     {
    //         if (j<n-i+1)
    //         {
    //             cout<<" ";
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
        
    // }

    // Q3(Alternate method)
    
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=2*n; j++)
        {
            if (j<=n-i+1 || j>=n+i)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        
        cout<<endl;
    }
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=2*n; j++)
        {
            if (j<=i || j>=2*n-i+1)
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

/*
Q1
OUTPUT:-
5
    *    
   ***   
  *****  
 ******* 
*********
*********
 ******* 
  *****  
   ***   
    * 


Q2
OUTPUT:-
5
    *     
   * *
  *   *
 *     *
*       *
*       *
 *     *
  *   *
   * *
    *

Q3
OUTPUT:-
5
*********
**** ****
***   ***
**     **
*       *
*       *
**     **
***   ***
**** ****
*********
*/