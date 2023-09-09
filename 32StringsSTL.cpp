#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
    //-----------DECLARATION-----------
    // string str;
    // cin>>str;
    // cout << str;

    // string s(5,'r');
    // cout<<s;

    // string s = "ApniKaksha";

    // string str;
    // getline(cin,str);
    // cout<<str;

    //-----String operations------

    // string s1 ="fam",s2="ily";
    // // s1.append(s2); //---> Changes the actual string s1
    // // cout<<s1<<"  "<<s2<<endl;

    // cout<<s1+s2;  //--->Concatenation without changing he actual string

    /*
    // string s1 = "nincompoop";
    // cout<<s1[5]<<endl;
    // s1.erase(6,2);
    // cout<<s1<<endl;
    // s1.clear();
    // cout<<s1<<endl;

    // cout<<s1.find("poo")<<endl;;
    // s1.insert(2,"lol");
    // cout<<s1<<endl;

    //------Traversal of a string-----
    // for (int i = 0; i < s1.size(); i++)
    // {
    //     cout<<s1[i]<<"   ";
    // }

    // cout<<s1.substr(6,3);
    */

    //    string s = "7863";
    //    int x = stoi(s);  //---> stoi-->string into integer
    //    cout<<x+5<<endl;

    //    int y = 786;
    //    cout<<to_string(y) + "8" <<endl;  //---->int into string


    //--------------- Uppercase and lowercase---------------------
    // 'a' - 'A' = 32   
    // By adding 32 in uppercase we can make a character into lowercase
    // By substracting 32 form a lowercase character we cam make it into uppercase
    
    
    // string s1 = "abcdefg";
    // for (int i = 0; i < s1.size(); i++)
    // {
        
    //     s1[i]-=32;
    // }
    // cout<<s1<<endl;

    // string s2 = "ABCDEF";
    // for (int i = 0; i < s1.size(); i++)
    // {
        
    //     s2[i]+=32;
    // }
    // cout<<s2<<endl;

    // we also have function transform
    // transform(s1.begin(),s1.end(),s1.begin(),::toupper);
    // cout<<s1<<endl;
    // transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    // cout<<s2<<endl;


    // Find the maximum frequency of the character in string
    /* We take an integer array of length 26 and store frequency of all characters
    and at last whose maximum frequency comes we print it
    */

   string s = "aafffdemwonoiwfowwwf";
   int freq[26];
   for (int i = 0; i < 26; i++)
   {
       freq[i] = 0;
   }
   for (int i = 0; i < s.size(); i++)
   {
       freq[s[i]-'a']++;
   }
   string ans = "a";
   int maxF = 0;
   for (int i = 0; i < 26; i++)
   {
       if (freq[i]>maxF)
       {
           maxF = freq[i];
           ans = i +'a';
       }
       
   }
   cout<<maxF<<"  "<<ans<<endl;

    return 0;
}