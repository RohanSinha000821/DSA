// Sieve of Eratosthenes 
// An alternate approach to print all prime numbers upto a given number.
#include<iostream>
using namespace std;

void primeSieve(int n){
    int prime[100] = {0}; // Initialised all values with zero
    for (int i = 2; i <= n; i++)
    {
        if (prime[i]==0) // 0 means the number is unmarked
        {
            for (int j = i*i; j <= n; j+=i){
                prime[j] = 1;  // marking the multiples of i
            }
            
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            cout<<i<<" ";
        }
        
    }
    
    
}
int main(){
    int n;
    cin>>n;
    
    primeSieve(n);
    return 0;
}