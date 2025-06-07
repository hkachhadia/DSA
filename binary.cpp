#include <iostream>

using namespace std;

void decitobin(int n)
{
    int pow = 1, ans = 0, rem, x;
    x = n;
    while (n > 0)
    {
        rem = n % 2;
        n = n / 2;
        ans = ans + (rem * pow);
        pow = pow * 10;
    }
    cout << "binary of decimal " << x << " is " << ans << endl;
}
void decitooctal(int n)
{
    int pow = 1, ans = 0, rem, x;
    x = n;
    while (n > 0)
    {
        rem = n % 8;
        n = n / 8;
        ans = ans + (rem * pow);
        pow = pow * 10;
    }
    cout << "octal of decimal " << x << " is " << ans << endl;
}
void decitohexa(int n)
{
    int pow = 1, rem, x, ans = 0;
    x = n;
    while (n > 0)
    {
        rem = n % 16;
        n = n / 16;
        ans = ans + (rem * pow);
        pow = pow * 10;
    }
    if (ans == 10)
    {
        cout << "hexa of decimal " << x << " is A" << endl;
    }
    else if (ans == 11)
    {
        cout << "hexa of decimal " << x << " is B" << endl;
    }
    else if (ans == 12)
    {
        cout << "hexa of decimal " << x << " is C" << endl;
    }
    else if (ans == 13)
    {
        cout << "hexa of decimal " << x << " is D" << endl;
    }
    else if (ans == 14)
    {
        cout << "hexa of decimal " << x << " is E" << endl;
    }
    else if (ans == 15)
    {
        cout << "hexa of decimal " << x << " is F" << endl;
    }
    else
    {
        cout << "hexa of decimal " << x << " is " << ans << endl;
    }
}
void bintodeci(int n)
{
    int pow = 1, ans = 0, rem, x;
    x = n;
    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;
        ans = ans + (rem * pow);
        pow = pow * 2;
    }
    cout << "decimal of binary " << x << " is " << ans << endl;
}

int main()
{
    int n, pow = 1, ans = 0, rem;
    cout << "Enter the number: ";
    cin >> n;
    decitobin(n);
    // decitooctal(n);
    // decitohexa(n);
    // bintodeci(n);

    return 0;
}