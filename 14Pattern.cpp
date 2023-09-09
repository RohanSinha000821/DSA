#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {    
        for (int j = n; j>=1 ; j--)
        {
            if (j>i)
            {
                cout<<"  ";
            }
            else{
                cout<<j<<" ";
            }
            
        }
        for (int j = 2; j<=n ; j++)
        {
            if (j>i)
            {
                cout<<"  ";
            }
            else{
                cout<<j<<" ";
            }
            
        }
        cout<<endl;
    }
 
    return 0;
}

//OUTPUT:-
// 8
//               1
//             2 1 2
//           3 2 1 2 3
//         4 3 2 1 2 3 4
//       5 4 3 2 1 2 3 4 5
//     6 5 4 3 2 1 2 3 4 5 6
//   7 6 5 4 3 2 1 2 3 4 5 6 7
// 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8