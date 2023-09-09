#include <iostream>
#include<climits>
using namespace std;
void possibleSubarrays(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}

// Brute force approach
// int maxSubarraySum(int arr[], int n)
// {
//     int sum;
//     int maxSum = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             sum = 0;
//             for (int k = i; k <= j; k++)
//             {
//                 sum+=arr[k];
//             }
//             maxSum  = max(maxSum ,sum);
//         }
//     }
//     return maxSum ;
// }

// Cumulative sum approach
// int maxSubarraySum(int arr[], int n)
// {
//     int currSum[n+1];
//     currSum[0] = 0;
//     for (int i = 1; i <=n; i++)
//     {
//         currSum[i] = currSum[i-1]+ arr[i-1];
//     }
//     int maxSum = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for (int j =i+1; j <=n; j++)
//         {
//            sum = currSum[j] - currSum[i];
//            maxSum = max(sum,maxSum);
//         }
//     }
//     return maxSum;
// }

// Kadane's algorithm
int maxSubarraySum(int arr[], int n)
{
    int currSum = 0;
    int maxSum = INT_MIN;

    // This loop is required if all the elements in the array is negative
    // for (int i = 0; i < n; i++)
    // {
    //     maxSum = max(maxSum,arr[i]);
    //     if (arr[i]>0)
    //     {
    //         break;
    //     }
    //     if (i==n-1)
    //     {
    //         return maxSum;
    //     }
        
    // }
    
    for (int i = 0; i < n; i++)
    {
      currSum+=arr[i];
      if (currSum<0)
      {
           currSum = 0;
      }
      maxSum = max(currSum,maxSum);
    }
    return maxSum;
}

//Maximum Circular subarray sum
int maxCircularSubarraySum(int arr[],int n){
    int wrapsum;
    int nonWrapsum;
    int totalSum = 0;
    nonWrapsum = maxSubarraySum(arr,n); //---->nonWrapsum is a case when maxSum in the linear array only.
    for (int i = 0; i < n; i++)
    {
        totalSum+=arr[i];
        arr[i] =-arr[i];
    }
    wrapsum = totalSum + maxSubarraySum(arr,n);//---> wrapSum is a case when maxSum in circular array.
    return max(wrapsum,nonWrapsum);
}


// Check if there exists two elements in a array such that their sum is equal to k(Pair sum problem)
//Brute force approach  //O(n^2)
void pairSumProblem(int arr[],int n,int key){
    int flag = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1 ; j < n; j++)
        {
            if (arr[i]+arr[j]==key)
            {
                cout<<"The pair sum exits at "<<i<<","<<j<<" position.";
                return;
            }
            
        }
        
    }
    cout<<"The pair sum does not exists";
    
}

// Sorted array approach // O(n)
void pairSum(int arr[],int n,int key){
    int h,l;
    l = 0;
    h = n-1;
    while (h>=l)
    {
        if (arr[h]+arr[l]==key)
        {
            cout<<"The pair sum exits at "<<l<<","<<h<<" position.";
            return;
        }
        else if (arr[h]+arr[l]>key)
        {
            h--;
        }
        else{
            l++;
        }
    }
    cout<<"The pair sum does not exists";
}
int main()
{
    int n,key;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Enter the key :- ";
    cin>>key;
    // possibleSubarrays(arr, n);
    // cout<<maxSubarraySum(arr,n);
    // cout<<maxCircularSubarraySum(arr,n);
    pairSumProblem(arr,n,key);
    return 0;
}