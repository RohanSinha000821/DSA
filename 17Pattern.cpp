#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // Q1
    //  for (int i = 1; i <= n; i++)
    //  {
    //      for (int j = n; j >= 1; j--)
    //      {
    //          if (j>i)
    //          {
    //              cout<<" ";
    //          }
    //          else{
    //              cout<<i<<" ";
    //          }
    //      }
    //      cout<<endl;

    // }

    // Q2
    //  for (int i = n; i >= 1; i--)
    //  {
    //      int k = 1;
    //      for (int j = 1; j <= n; j++)
    //      {
    //          if (j<i)
    //          {
    //              cout<<" ";
    //          }
    //          else{
    //              cout<<k<<" ";
    //              k++;
    //          }

    //     }
    //     cout<<endl;

    // }

    // Q2(Alternate method)

    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = 1; j <=n-i; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = 1; j <=i; j++)
    //     {
    //        cout<<j<<" ";
    //     }
        
    //     cout<<endl;
    // }

    
    // Q3

    // int coef=1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         if (j==0)
    //         {
    //             coef = 1; 
    //         }
    //         else{
    //             coef = coef * (i-j+1)/j;
    //         }
    //         cout<<coef<<" ";
    //     }
    //     cout<<endl;
    // }


    //Q4 Pascal Triangle

    int coef=1;
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < n-i; space++)
        {
            cout<<"  ";
        }
        for (int j = 0; j <= i; j++)
        {
            if (j==0)
            {
                coef = 1; 
            }
            else{
                coef = coef * (i-j+1)/j;
            }
            cout<<coef<<"   ";
        }
        cout<<endl;
    }

    return 0;
}

/*
OUTPUT1:-
    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5


OUTPUT2:-
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5

OUTPUT3:-
5
1 
1 1
1 2 1
1 3 3 1
1 4 6 4 1

OUTPUT4:-
5

          1   
        1   1
      1   2   1
    1   3   3   1
  1   4   6   4   1

*/