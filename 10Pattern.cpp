#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    // // Q1
    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    // Q2
    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // Q3
    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = 1; j <= n-i+1; j++)
    //     {
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // Q4
     for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*
Q1
OUTPUT:-
5
1 
2 2
3 3 3
4 4 4 4
5 5 5 5 5

Q2
OUTPUT:-
5
1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5

Q3
OUTPUT:-
5
1 1 1 1 1 
2 2 2 2
3 3 3
4 4
5

Q4
OUTPUT:-
5
1 2 3 4 5 
1 2 3 4
1 2 3
1 2
1
*/