#include<iostream>
using namespace std;

/* Q1

Finding a unique number in a given array if every number occur twice --> {2,4,6,3,4,6,2}  --> 3 is unique
This is done using xor operator
All numbers except unique number will give xor as zero and zero and number gives the number

  2^4 --> 010^100 = 110 (6)
  110^6 --> 110^110 = 000
  000^3 --> 000^011 = 011 (3)
  011^4 --> 011^100 = 111(7)
  111^6 --> 111^110 = 001(1)
  001^2 --> 001^010 = 011 (3)

  Basically xoring all the elements of array give the unique element.

*/
int unique(int arr[],int n){
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum^arr[i];
    }
    return xorsum;
}

/* Q2
Finding two unique elements in the given array if every number occur twice.
we xor all the elements of the array and we get the xor of the two unique elements present in the
array.(as prevous question)

Eg-> {2,4,6,7,4,5,6,2}
Following the same process as before we get the xor of 7 and 5 as they are the unique elements 
of the array

7^5 --> 111^101 = 010 
------- (Now how to retrieve the unique elements)-------
For 7 :-
Now we check the position rightmost set bit(position of the rightmost bit having 1) 
(i.e, 2nd position here)
Among the two unique elements only one has 1 at that position
so we check in array for elements having 1 in 2nd position and xor them all
In this way, since here 7 has 1 in 2nd position we get the number 7 like that.

For 5:-
Since we got one unique number we will xor it with the xorsum(xor of all the elements of the array)

7^010 --> 111^010 = 101 (5)
This is how we get the second unique element in the array
*/
void uniqueTwo(int arr[],int n){
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum^arr[i];
    }
    int pos=0,x=0;
    while (x!=1)
    {
        x = 1 & (xorsum>>pos);
        pos++;
    }
    pos--; // Eik bar extra pos++ ho ja raha hai
    int xorunique=0;
    for (int k = 0; k < n; k++)
    {
        if ((arr[k]>>pos) & 1 == 1)
        {
            xorunique = xorunique ^ arr[k];
        }
        
    }
    cout<<xorunique<<endl;
    cout<<(xorsum^xorunique);
}

/* Q3

Finding a unique element in the given array if every number occur thrice.

We will have a 64 bit array and we will store the number of 1's at a given position for 
all elements in the array.

if at a position we have number of ones coming in the multiple of three then we will consider 
zero at that postion and not the 1 at that postion
*/

int uniqueThree(int arr[],int n){
    int bit[64];
    for (int i = 0; i < 64; i++)
    {
        bit[i] = 0;
    }
    int pos = 0;
    for (int i = 0; i < 64; i++)
    {
        int c = 0;
        for (int j = 0; j < n; j++)
        {
            if ((arr[j]>>pos) & 1 == 1) 
            {
                c++;
            }
            
        }
        bit[pos] = c;
        pos++;
    }
    int uniqueNum = 0;
    for (int i = 0; i < 64; i++)
    {
        if ((bit[i]%3)!=0)
        {
            uniqueNum = uniqueNum | (1<<i);
        }
        
    }
    return uniqueNum;
    
}

int main(){
    // Q1
    // int arr[] = {1,4,2,1,3,2,3};
    // cout<<unique(arr,7)<<endl;

    // Q2 
    // int arr[] = {2,4,6,7,4,5,6,2};
    // uniqueTwo(arr,8);

    // Q3
    int arr[] = {1,3,2,3,7,2,1,1,3,2}; // Here 7 is unique
    cout<<uniqueThree(arr,10);
    return 0;
}