#include<iostream>
using namespace std;
const int row=3,col=3;
// We can take formal arguments as -->(int a[][col]) or (int a[row][col])
void EnterValues(int (*a)[col]){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>a[i][j];
        }
        
    }
}
void display(int a[][col]){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void display(int *a,int row,int col){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<*(a+i*col+j)<<" ";
        }
        cout<<endl;
    }
}
void tranpose(int a[row][col]){
    for (int i = 0; i < row; i++)
    {
        for (int j = i+1; j < col; j++)
        {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
        
    }
    
}
int main(){
    int a[row][col];
    EnterValues(a);
    cout<<endl;
    display((int *)a,row,col);  // Imp
    cout<<endl;
    tranpose(a);
    display(a);

    return 0;
}