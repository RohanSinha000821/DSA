#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if (a>c)
        {
            cout<<"The greatest is "<<a;
        }
        else{
            cout<<"The greatest is "<<c;
        }
    }
    else{
        if (b>c)
        {
            cout<<"The greatest is "<<b;
        }
        else{
            cout<<"The greatest is "<<c;
        }
    }
    return 0;
}