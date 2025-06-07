#include<iostream>

#include<algorithm>

#include<vector>

using namespace std;
int CountPrime(int n)
{
    int ans = 0;
    vector<bool>isPrime(n+1,true);
    for (int i = 2; i < n; i++)
    {
        if (isPrime[i])
        {
             ans++;
             for (int j = i*2; j < n; j+=i)
             {
                isPrime[j] = false;
             }
             
        }
        
    }
    return ans;
}
int main(){
    int n=50;
    cout<<CountPrime(n)<<endl;
    
    
    
    return 0;
}