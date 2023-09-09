#include <iostream>
#include <climits>
using namespace std;
int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
// O(log n)
int binarySearch(int arr[], int n, int key)
{
    int l = 0;
    int h = n - 1;
    int mid = (h + l) / 2;
    while (h >= l)
    {
        mid = (h + l) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
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
    cout << "Enter the key:- ";
    int key;
    cin >> key;

    // int maxElement = INT_MIN;
    // int minElement = INT_MAX;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i]>maxElement)
    //     {
    //         maxElement = arr[i];
    //     }
    //     if (arr[i]<minElement)
    //     {
    //         minElement = arr[i];
    //     }

    // }
    // cout<<"The largest element in the array is "<<maxElement<<endl;
    // cout<<"The smallest element in the array is "<<minElement<<endl;

    cout << binarySearch(arr, n, key) << endl;
    return 0;
}