#include <iostream>

#include <algorithm>

#include <vector>

#include<math.h>

using namespace std;
void PrintDigits(int n)
{
    int rem;
    while (n != 0)
    {
        rem = n % 10;
        cout << rem << endl;
        n = n / 10;
    }
}
void CountDigits(int n)
{
    int rem, count = 0;
    while (n != 0)
    {
        rem = n % 10;
        count++;
        n = n / 10;
    }
    cout << "COUNT :" << count << endl;
}
void SumofDigits(int n)
{
    int rem, sum = 0;
    while (n != 0)
    {
        rem = n % 10;
        sum += rem;
        n = n / 10;
    }
    cout << "SUM :" << sum << endl;
}
int main()
{
    int n = 34654;
    PrintDigits(n);
    SumofDigits(n);
    CountDigits(n);
    // COUNT OF DIGITS SHORTCUT
    cout << "Count of digits by shortcut : " << (int)(log10(n) + 1);
    return 0;
}