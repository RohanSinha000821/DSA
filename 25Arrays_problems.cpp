#include <iostream>
#include <climits>
using namespace std;
// Lec no - 23.8.4
// maximum of elements of array till ith index
void MaxTill(int arr[], int n)
{
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx,arr[i]);
        cout<<mx<<" ";
    }
}
// Output sum of each subarray of the given array
void sumSubarray(int arr[],int n){
    
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum+=arr[j];
            cout<<sum<<" ";
        }
        
    }
    
}
// Length of maximum subarray
int maxSubarrayLength(int arr[],int n){
    int ans = 2;
    int pd = arr[1]-arr[0]; //pd-->previous common difference
    int j = 2;
    int curr = 2;
    while (j<n)
    {
        if (pd == arr[j]-arr[j-1])
        {
            curr++;
        }
        else{
            pd = arr[j] - arr[j-1];
            curr = 2;
        }
        ans = max(ans,curr);
        j++;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // MaxTill(arr, n);
    // sumSubarray(arr,n);
    cout<<maxSubarrayLength(arr,n)<<endl;
    return 0;
}