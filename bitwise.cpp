#include <iostream>

using namespace std;

void powerof2(int n)
{
    int rem;
    for (int i = 2; i < n; i *= 2)
    {
        rem = n % i;
    }
    if (rem == 0)
    {
        cout << n << " is power of 2" << endl;
    }
    else
    {
        cout << n << " is not power of 2" << endl;
    }
}
void bitpowof2(int n)
{
    int x = n;
    int flag = 0;
    while (n > 0)
    {
        if ((n & 1) == 1)
        {
            flag++;
        }
        n = n >> 1;
    }
    if (flag == 1)
    {
        cout << x << " is power of 2" << endl;
    }
    else
    {
        cout << x << " is not power of 2" << endl;
    }
}
void revnum(int n){
    int rem,ans=0;
    while(n>0){
    rem = n%10;
    n=n/10;
    ans = ans * 10 +rem;
    }
    cout<<"reverse: "<<ans;
}
int main()
{
    // int a = 0, b = 1;
    // cout << (a & b) << endl; //BITWISE AND
    // cout << (a | b) << endl; //BITWISE OR
    // cout << (a ^ b) << endl; //EXCLUSIVE OR
    // cout << (4 << 1) << endl; //LEFT SHIFT-> a<<b = a*2^b
    // cout << (4 >> 1) << endl; //RIGHT SHIFT-> a>>b = a/2^b

    int n;
    cout << "Enter the number: ";
    cin >> n;
    // bitpowof2(n);
    revnum(n);

    return 0;
}