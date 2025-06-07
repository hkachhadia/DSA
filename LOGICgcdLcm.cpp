#include <iostream>

#include <algorithm>

#include <vector>

using namespace std;
int gcdBrute(int a, int b)
{
    int gcd = 0;
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}
// BY EUCLID'S ALGORITHM WITH RECURSION
int gcdWrecur(int a, int b)
{
    // assume a > b
    if (b == 0)
        return a;
    return gcdWrecur(b, a % b);
}
int lcm(int a,int b)
{
    int gcd = gcdWrecur(a,b);
    return (a*b)/gcd;
}
// BY EUCLID'S ALGORITHM WITHOUT RECURSION
int gcd(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
}
int main()
{
    int a = 20, b = 28;
    cout <<"gcd : "<<gcd(a, b) << endl;
    cout <<"lcm : "<<lcm(a, b) << endl;

    return 0;
}