#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // for (int i = 1; i <=n ; i++)
    // {
    //     for (int j = 1; j <= n-i; j++)
    //     {
    //         cout<<"  ";
    //     }
    //     for (int l = 1; l <= i; l++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;

    // }

    // for (int i = n; i >=1 ; i--)
    // {
    //     int k = 1;
    //     for (int j = 1; j <= i-k; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int l = i-k+1; l <= n; l++)
    //     {
    //         cout << "*";
    //     }
    //     k++;
    //     cout << endl;
    // }



    for (int i = 1; i <=n ; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j<=n-i)
            {
                cout<<"  ";
            }
            else
            {
                cout<<"* ";
            }
        }
        cout<<endl;

    }

    return 0;
}

// OUTPUT:-

// 5
//         * 
//       * * 
//     * * * 
//   * * * * 
// * * * * * 