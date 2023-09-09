#include<iostream>
using namespace std;
// Q1
// Chech the array is sorted or not using recursion.
bool isSortArray(int arr[],int n){
    if (n==1)
    {
        return true;
    }
    
    bool restArray = isSortArray(arr+1,n-1);
    return(arr[0]<arr[1] && restArray);
}

// Q2
// Printing numbers in increasing and decreasing order
void increasingOrder(int n){
    if (n==0)
    {
        return;
    }
    
    increasingOrder(n-1);
    cout<<n<<" ";
}
void decreasingOrder(int n){
    if (n==0)
    {
        return;
    }
    cout<<n<<" ";
    decreasingOrder(n-1);
}

//  Q3
// Finding the first and last occurence of a number in an array

// int firstOccurence(int arr[],int n,int num){
//     static int k = 0;
//     if (k==n)
//     {
//         return -1;
//     }
    
//     if (arr[0]==num)
//     {
//         return k;
//     }
//     k++;
//     firstOccurence(arr+1,n-1,num);
    
// }
int firstOccurence(int arr[],int n,int i,int key){
    if (i==n)
    {
        return -1;
    }
    
    if (arr[i]==key)
    {
        return i;
    }
    firstOccurence(arr,n,i+1,key);
    
}
int lastOccurence(int arr[],int n,int i,int key){
    if (i==n)
    {
        return -1;
    }
    
    int restArray = lastOccurence(arr,n,i+1,key);
    if (restArray!=-1)
    {
        return restArray;
    }
    
    
    if (arr[i]==key)
    {
        return i;
    }
    return -1;
}


int main(){
    //  Q1
    // int arr[] = {1,2,3,4,5,6};
    // cout<<isSortArray(arr,6);

    // Q2
    // int n;
    // cin>>n;
    // increasingOrder(n);
    // cout<<endl;
    // decreasingOrder(n);

    // Q3
    // Important example to understand recursion 
    int arr[] = {5,7,2,7,4,2,1,10};
    // cout<<firstOccurence(arr,12,2)<<endl;
    cout<<firstOccurence(arr,8,0,2)<<endl;
    cout<<lastOccurence(arr,8,0,2)<<endl;
    return 0;
}