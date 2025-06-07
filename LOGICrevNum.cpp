#include <iostream>

#include <algorithm>

#include <vector>

using namespace std;
int revNum(int n)
{
    int revNum = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        if (revNum > INT16_MAX / 10 || revNum < INT16_MIN / 10)
            return 0;
        revNum = (revNum * 10) + rem;
        n = n / 10;
    }
    return revNum;
}
bool isPalindrome(int n)
{
    int rev = revNum(n);
    if (n < 0)
        return false;
    if (n == rev)
        return true;
    else
        return false;
}
int main()
{
    int n = 4537;
    cout << revNum(n) << endl;
    cout << isPalindrome(n) << endl;
    return 0;
}