#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
// WAP to give the following output
//       indices-->0 1 2 3 4
// Eg --> arr[] = {5,1,3,2,4};
//   ans[] =      {4,0,2,1,3} --> in sorted array 5 in 4th index,1 at oth index and so on

// Eg2 --> arr[] = {10,16,7,14,5,3,12,9}  //  sorted arr[] = {3,5,7,9,10,12,14,16}
//         ans[] = { 4, 7,2, 6,1,0, 5,3}

bool myComparator(pair <int,int> p1 ,pair<int,int>p2){
    return p1.first<p2.first;
}

int main(){
    // pair <int,char> p;
    // p.first = 10;
    // p.second = 'x';

    int arr[] = {10,16,7,14,5,3,12,9};
    vector <pair<int,int>> v;

    for (int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++)
    {
        // pair<int,int> p;
        // p.first = arr[i];
        // p.second = i;
        // v.push_back(p);

        // or

        v.push_back(make_pair(arr[i],i));
    }
     
    sort(v.begin(),v.end(),myComparator);
    for (int i = 0; i < v.size(); i++)
    {
        arr[v[i].second] = i;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}