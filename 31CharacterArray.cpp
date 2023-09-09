#include<iostream>
using namespace std;

int main(){

    // char arr[100] = "I am a student of MnC";
    // cout<<arr; //Printing a char array
    // //Traversing
    // // int i = 0;
    // // while (arr[i] !='\0')
    // // {
    // //     cout<<arr[i];
    // //     i++;
    // // }


    // char arr[100];
    // cin>>arr;
    // cout<<arr;

    // Check palindrome
    // int n;
    // cin>>n;
    // char arr[n+1];
    // cin>>arr;
    // bool check = 1;
    // for (int i = 0; i < n/2; i++)
    // {
    //     if (arr[i]!=arr[n-i-1])
    //     {
    //         check = 0;
    //         break;
    //     }
        
    // }
    // if (check)
    // {
    //     cout<<"The word is palindrome";
    // }
    // else{
    //     cout<<"The word is not palindrome";
    // }
    
    // Largest word in a sentence
    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cin.getline(arr,n);
    // cin.ignore();

    int i = 0;
    int currLen =0,maxLen = 0;
    int st =0,maxst =0;

    while (1)
    {
        if (arr[i] == ' ' || arr[i]== '\0')
        {
            if (currLen>maxLen)
            {
                maxLen = currLen;
                maxst = st;
            }
            currLen = 0;
            st = i+1;
        }
        else
            currLen++;
        
        if (arr[i] == '\0')
            break;
        
        
        i++;
        
    }
    cout<<maxLen<<endl;
    for (int i = 0; i < maxLen; i++)
    {
        cout<<arr[i+maxst];
    }
    
    return 0;
}
