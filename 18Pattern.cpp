#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    // Q1
    // for (int i = 1; i <= n; i++)
    // {
    //     int j;
    //     for (j = 1; j <= n-i ; j++)
    //     {
    //         cout<<"  ";
    //     }
    //     for (; j <n+i; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
        
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     int j;
    //     for (j = 1; j < i ; j++)
    //     {
    //         cout<<"  ";
    //     }
    //     for (j=i; j <= 2*n-i; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
        
    // }
    
    // Q2
    for (int i = 1; i <= n/3; i++)
    {
        int j;
        for (j = 1; j <= n ; j++)
        {
            if ((i+j)%4==0 || (i==2 && j%4==0))
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        
    }
    

    // Q2 (Alternate method)
    // for (int i = 1; i <=n; i++)
    // {
    //     static int k = 3;
    //     if (i==k)
    //     {
    //         cout<<"*";
    //         k+=4;
    //     }
    //     else{
    //         cout<<" ";
    //     }
        
    // }
    // cout<<endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i%2==0)
    //     {
    //         cout<<"*";
    //     }
    //     else{
    //         cout<<" ";
    //     }
    // }
    // cout<<endl;
    // for (int i = 1; i <=n; i++)
    // {
    //     static int k = 1;
    //     if (i==k)
    //     {
    //         cout<<"*";
    //         k+=4;
    //     }
    //     else{
    //         cout<<" ";
    //     }
        
    // }
   
    

    return 0;
}
/*
OUTPUT:-
5
        * 
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        * 

OUTPUT:-
9
  *   *  
 * * * * 
*   *   *


*/