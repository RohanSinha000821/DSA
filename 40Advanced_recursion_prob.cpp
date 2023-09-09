#include<iostream>
using namespace std;
// Q1 Print all the permutation of the string
void permutation(string s,string ans){
    if (s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string ros = s.substr(0,i)+s.substr(i+1);
        permutation(ros,ans+ch);
    }
    
}
// Q2 Count the number of paths in a maze
int countMazePath(int n,int i,int j){
    if (i==n-1||j==n-1)
    {
        return 1;
    }
    if (i>=n||j>=n)
    {
        return 0;
    }
    
    return(countMazePath(n,i+1,j)+countMazePath(n,i,j+1));
}

// Q3 Knapsack Problem
int knapSack(int value[],int wt[],int n,int W){
    if (n==0||W==0)
    {
        return 0;
    }
    if (wt[n-1]>W)
    {
        return knapSack(value,wt,n,W);
    }
    return(max(knapSack(value,wt,n-1,W-wt[n-1])+value[n-1],knapSack(value,wt,n-1,W)));
}

int main(){
    // Q1
    // permutation("ABC","");

    // Q2
    // cout<<countMazePath(3,0,0);

    // Q3
    int wt[] = {10,20,30};
    int value[] = {100,50,150};
    cout<<knapSack(value,wt,3,50);
    return 0;
}