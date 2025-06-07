#include <iostream>
#include <bits/stdc++.h> //for sort function
#include <vector>

using namespace std;

bool isPossible(vector<int> &a, int mid, int n, int c)
{
    int cows = 1, LastStallPos = a[0];
    for (int i = 1; i < n; i++)
    {
        if ((a[i] - LastStallPos) >= mid)
        {
            cows++;
            LastStallPos = a[i];
        }
        if (cows == c)
        {
            return true;
        }
    }
    return false;
}
int AggressiveCows(vector<int> &a, int n, int c)
{
    sort(a.begin(), a.end());
    int st = 1, end = a[n - 1] - a[0], ans = -1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isPossible(a, mid, n, c))
        {
            ans = mid;
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> vec = {1, 2, 8, 4, 9};
    // int n = 5, c = 2;
    cout << AggressiveCows(vec, 5, 3);
    return 0;
}