#include<iostream>
using namespace std;

// Funtion to check whether a number is power of two or not
bool isPowerof2(int n){
    return(n && !(n&(n-1)));
}


// Funtion to check the number of ones in the binary representation of a number
int numberOfOnes(int n){
    int count = 0;
    while (n!=0)
    {
        n = n & (n-1);
        count++;
    }
    return count;
}

// Function to print all the subsets of a set stored in array
void subsets(int arr[],int n){
    for (int i = 0; i < (1<<n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1<<j))
            {
                cout<<arr[j]<<" ";
            }
            
        }
        cout<<endl;
        
    }
    
}
int main(){
    // int n;
    // cin>>n;
    // cout<<isPowerof2(n);
    // cout<<numberOfOnes(19);
    
    int arr[4] = {1,2,3,4};
    subsets(arr,4);
    return 0;
}