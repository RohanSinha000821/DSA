#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;



int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(9);
    cout<<"Found-->"<<binary_search(v.begin(),v.end(),9)<<endl; 
    cout<<"Lower Bound-->"<<lower_bound(v.begin(),v.end(),9)-v.begin()<<endl;
    cout<<"Upper Bound-->"<<upper_bound(v.begin(),v.end(),9)-v.begin()<<endl;
    int a=5;
    int b=8;
    cout<<"Max of (5,8):"<<max(a,b)<<endl;
    cout<<"Min of (5,8):"<<min(a,b)<<endl;
    cout<<"Value of a before swap: "<<a<<endl;
    cout<<"Value of b before swap: "<<b<<endl;
    swap(a,b);
    cout<<"Value of a after swap: "<<a<<endl;
    cout<<"Value of b after swap: "<<b<<endl;
    
    string p="abcd";
    cout<<"The string is :"<<p<<endl;
    reverse(p.begin(),p.end());
    cout<<"Reverse of the string is :"<<p<<endl;

    rotate(v.begin(),v.begin()+3,v.end());
    cout<<"After rotate"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    //Sort function is based on intro sort Algorithm-quick sort,heap sort,insertion sort
    sort(v.begin(),v.end());
     for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}