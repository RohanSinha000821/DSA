#include<iostream>
using namespace std;
// Q1
// Reverse a string using recursion\

void reverseString(string s){
    if (s.length()==0) // base case
    {
        return;
    }
    
    string ros = s.substr(1); // Gives string from 1st index 
    reverseString(ros);
    cout<<s[0];
}

// "pippppiiiipi"
// Replace pi with 3.14 using recursion

void replacePi(string s){
    if (s.length()==0)
    {
        return;
    }
    if (s[0]=='p' && s[1]=='i')
    {
        cout<<3.14;
        replacePi(s.substr(2)); // gives string from 2st index
    }
    else{
        cout<<s[0];
        replacePi(s.substr(1));
    }
}

// Tower of Hanoi
void towerOfHanoi(int n,char source,char dest,char helper){ // source helper destination
   if (n==0)
   {
       return;  // base case
   }
   
   
   towerOfHanoi(n-1,source,helper,dest);
   cout<<"Move from "<<source<<" to "<<dest<<endl;
   towerOfHanoi(n-1,helper,dest,source);
}

// Remove duplicates in a string
//"aaaabbbeeecdddddd"
string removeDuplicate(string s){
    if (s.length()==0)
    {
        return "";
    }
    char ch = s[0];
    string ans = removeDuplicate(s.substr(1));

    if (ch==ans[0])
    {
        return ans;
    }
    return (ch+ans);
}

// Move all the x in string in last
// Eg--> "axxbdxcefxhix" --> "abdcefhixxxxx"
string shiftX(string s){
    if (s.length()==0)
    {
        return "";
    }
    char ch = s[0];
    string ans = shiftX(s.substr(1));

    if (ch=='x')
    {
        return (ans+ch);
    }
    return (ch+ans);
}

// Generate all substrings of a string

void substring(string s,string ans){
    if (s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    
    char ch = s[0];
    string ros = s.substr(1); // ros--> rest of string

    substring(ros,ans);
    substring(ros,ans+ch);
}

// Generate all substrings of a string with ASCII code
void substringWithAscii(string s,string ans){
    if (s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    
    char ch = s[0];
    int code = ch;
    string ros = s.substr(1); // ros--> rest of string

    substringWithAscii(ros,ans);
    substringWithAscii(ros,ans+ch);
    substringWithAscii(ros,to_string(code));
}
int main(){
    // Q1
    // reverseString("binod");
    // cout<<endl;.
    // Q2
    // replacePi("pippppiiiipi");
    
    //Q3
    // towerOfHanoi(3,'A','C','B');

    //Q4
    // cout<<removeDuplicate("aaaabbbeeecddddd");

    //Q5
    // cout<<shiftX("axxbdxcefxhix");

    // Q6
    // substring("ABC","");

    // Q7
    substringWithAscii("AB","");

    return 0;
}