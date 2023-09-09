#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int k = 1; k <= col; k++)
        {
           cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// OUTPUT:-

// 5 4
// ****
// ****
// ****
// ****
// ****