#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (j == 1 || j == col || i == 1 || i == row)
            {
                cout << "*";
            }
            // if (j == 1 || j == col)
            // {
            //     cout << "*";
            // }
            // else if (i == 1 || i == row)
            // {
            //     cout << "*";
            // }

            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
    return 0;
}


// OUTPUT:-

// 5 4
// ****
// *  *
// *  *
// *  *
// ****