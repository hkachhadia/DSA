#include<iostream>

using namespace std;

int main(){
    //X^n ~>binary exponentiation O(logn)
    long n; // binaryform
    double ans =1,x;

    cout<<"Enter the value of X: ";cin>>x;
    cout<<"Enter the value power: ";cin>>n;
    double p =x;
    long m = n;

    if(n==0) return 1;
    if(x==0) return 0;
    if(x==1) return 1;
    if(n==1) return x;
    if(x==-1){
        if(n%2==0) return 1;
        if(n%2!=0) return -1;
    }

    if (n<0)
    {
        x = 1/x;
        n = -n;
    }
    
    while (n > 0)
    {
        if (n%2 == 1) //selection of last digit of the binary form
        {
            ans *= x;  //multiplying number with itself when binform contain 1;
        }
            x*=x;   //updating value of x {1,2,4,8,16,32...}
            n/=2;
        
    }
    cout<<p<<"^"<<m<<"="<<ans<<endl;
    
    return 0;
}