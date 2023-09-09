#include <iostream>
using namespace std;
int main()
{
    int a[3][3]= {{1,2,3},{4,5,6},{7,8,9}};//---> 2D array  
    int row, col;
    cin >> row >> col;
    int arr[row][col];
    int tranpose[col][row];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    //Matrix display
    cout<<"The matrix is :- \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // Just to display the transpose of matrix
    // cout<<"The transpose of matrix is :- \n";
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }

    // Transpose of a square matrix
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = i; j < col; j++)
    //     {
    //         int temp = arr[i][j];
    //         arr[i][j] = arr[j][i];
    //         arr[j][i] = temp;
    //     }
    // }


    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            tranpose[j][i] = arr[i][j];
        }
    }



    cout<<"The transpose of matrix is :- \n";
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout<<tranpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}