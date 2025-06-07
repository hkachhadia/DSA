#include<iostream>

#include<algorithm>

#include<vector>

using namespace std;

bool IsArmstrong(int n)
{
    int rem,ans = 0,temp = n;
    while(n!=0)
    {
        rem = n % 10;
        ans = ans + (rem*rem*rem);
        n = n/10;
    }
    if (ans == temp)
    {
        return true;
    }
    return false;
}   
int main(){
    int n = 153;
    cout<<IsArmstrong(n);
    return 0;
}