#include <iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = arr[i];
            if (arr[i] > arr[j])
            {
                arr[i] = arr[j];
                arr[j] = temp;
                
            }
        }
    }
}
// void bubbleSort(int arr[],int n){
//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = 0; j < n-i-1; j++)
//         {
//             if (arr[j]>arr[j+1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }

//         }

//     }

// }
void bubbleSort(int arr[], int n)
{
    int counter = 0;
    while (counter < n - 1)
    {
        for (int i = 0; i < n - counter - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
}
void insertionSort(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j=i-1;
        while (arr[j]>temp && j>=0)
        {
            arr[j+1]= arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    
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
    // selectionSort(arr,n);
    // bubbleSort(arr, n);
    insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}