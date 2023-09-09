#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    // Matrix display
    // cout<<"The matrix is :- \n";
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // Spiral order printing
    int row_start = 0, row_end = row - 1, col_start = 0, col_end = col - 1;
    while (row_start <= row_end && col_start <= col_end)
    {
        // for row_start
        for (int i = col_start; i <= col_end; i++)
        {
            cout << arr[row_start][i] << " ";
        }
        row_start++;

        // for col_end
        for (int j = row_start; j <= row_end; j++)
        {
            cout << arr[j][col_end] << " ";
        }
        col_end--;

        // for row_end
        for (int k = col_end; k >= col_start; k--)
        {
            cout << arr[row_end][k] << " ";
        }
        row_end--;

        // for col_start
        for (int l = row_end; l >= row_start; l--)
        {
            cout << arr[l][col_start] << " ";
        }
        col_start++;
    }

    return 0;
}