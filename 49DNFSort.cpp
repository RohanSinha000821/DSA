#include<iostream>
using namespace std;
// Dutch national flag sort(DNF Sort)
// 0,1,2 sort --> As only elements in the array are 0,1,2
void swap(int arr[],int i,int j){
    int temp =arr[i];
    arr[i] =arr[j];
    arr[j] = temp;
}
void DNFSort(int arr[],int n){
    int low=0,mid=0,high=n-1;
    while (mid<=high)
    {
        if (arr[mid]==0)
        {
            swap(arr,low,mid);
            low++;
            mid++;
        }
        else if (arr[mid]==1)
        {
            mid++;
        }
        else{
            swap(arr,mid,high);
            high--;
        }
    }
}
int main(){
    int arr[] = {1,0,2,1,0,1,2,1,2};
    DNFSort(arr,9);
    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}