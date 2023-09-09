#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int n1, n2,key;
    cin >> n1 >> n2 ;
    int a[n1][n2];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> a[i][j];
        }
    }
    cout<<"Enter the key to be found :- ";
    cin>>key;
    bool found = false;
    int r = 0,c = n2-1;
    while (r<n1 && c>=0)
    {
        if (a[r][c] == key)
        {
            found = true;
        }
        a[r][c]>key?c--:r++;
    }
    if (found)
    {
        cout<<"Found";
    }
    else{
        cout<<"Not found";
    }
    
    return 0;
}
/*

The above search is for those matrix in which rows and columns are sorted.
we can start search either from 15 or 18(Think why).

 1  4  7 11 15  
 2  5  8 12 19
 3  6  9 16 12
10 13 14 17 24
18 21 23 26 30
*/