#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

void displayVector(vector <int> v){
    for (auto element:v)
    {
        cout<<element<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v;
    // Entering elements in a vector
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // Traversing vector
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // Iterative approach
    vector<int>::iterator it;
    for (it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }
    cout<<endl;

    //Traversing vector using auto keyword
    for (auto e:v)
    {
        cout<<e<<" ";
    }
    cout<<endl;

    // Remove element from the back
    v.pop_back();
    displayVector(v);


    vector <int> v2(3,50); // v2--> 50 50 50
    displayVector(v2);

    swap(v,v2);
    cout<<"v ---> ";
    displayVector(v);
    cout<<"v2 ---> ";
    displayVector(v2);
    
    // Sorting in vectors 
    vector <int> v3{5,2,3,4,1};
    displayVector(v3);
    sort(v3.begin(),v3.end());
    displayVector(v3);

    return 0;
}