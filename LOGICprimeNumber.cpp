#include<iostream>

#include<algorithm>

#include<vector>

using namespace std;
string Prime(int n)
{
    for (int i = 2; i*i<=n; i++)
    {
        if(n%i == 0)
        {
            return "Non Prime";
        }
    }
    return "Prime";
    
}
int main(){
    int n,t;
    cout<<"Enter your number of try :";cin>>t;
    for (int i = 1; i <= t; i++)
    {
        cout<<"try :"<<i<<endl;
        cout<<"Enter the number for checking: ";cin>>n;
        cout<<Prime(n)<<endl;  
    }
    
    return 0;
}