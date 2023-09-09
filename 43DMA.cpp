// Dynamic memory allocation (arrays)
#include<iostream>
using namespace std;
void display(int **a,int r,int c){
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
int main(){
    // DMA in variables
    // int *p = new int(10);
    // float *f = new float(12.5f);
    // char *ch = new char('x');

    // cout<<*p<<endl;
    // cout<<*f<<endl;
    // cout<<*ch<<endl;

    // DMA in 1d arrays
    // int n;
    // cin>>n;

    // int *p = new int[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>*(p+i);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<*(p+i)<<" ";
    // }
    
    // DMA in 2D arrays
    
    int row,col;
    cin>>row>>col;
    int**p;
    p = new int*[row];  // Memory allocation for all rows

    for (int i = 0; i < row; i++)
    {
        p[i] = new int[col]; // Memory allocation for columns of each row
        for (int j = 0; j < col; j++)
        {
            cin>>p[i][j];
        }
        
    }
    display(p,row,col);


    return 0;
}