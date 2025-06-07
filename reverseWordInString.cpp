#include <iostream>

#include <algorithm>

#include <vector>

using namespace std;
void ReverseWord(string str) // O(n)
{
    reverse(str.begin(), str.end()); // nep eht
    int n = str.length();
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        string temp = "";
        while (i < n && str[i] != ' ')
        {
            temp += str[i];
            i++;
        }
        reverse(temp.begin(), temp.end());
        if (temp.length() > 0)
        {
            ans += " " + temp;
        }
    }
    cout << ans.substr(1); // string will strats from 1st idx
}
int main()
{
    string str = "the pen";
    ReverseWord(str);
    return 0;
}