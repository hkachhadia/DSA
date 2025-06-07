#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &a, int n, int m, int mid) // O(n)
{
    // mid = MaxAllowedPages
    int stu = 1, pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > mid) // edge case
            return false;
        if (pages + a[i] <= mid)
            pages += a[i];
        else
        {
            stu++; // new student required
            pages = a[i];
        }
    }
    if (stu > m)
        return false;
    else if (stu <= m)
        return true;
}
int sum(vector<int> &a,int n) // O(n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum; // finding upperlimit of range of all possible ans
}
int BookAllocation(vector<int> &a, int n, int m) // O(log(Range) * n)
{
    int ans = -1, st = 0, end = sum(a,n), mid;
    if (m > n) // edge case
        return -1;
    while (st <= end)
    {
        mid = st + (end - st) / 2;
        if (isValid(a, n, m, mid)) // left
        {
            ans = mid;
            end = mid - 1;
        }
        else // right
        {
            st = mid + 1;
        }
    }
    return ans;
}
int main()
{
    // vector<int> vec = {2, 1, 3, 4};
    vector<int> vec = {40,30,10,20};
    int m = 2, n = 4;
    cout << BookAllocation(vec, n, m) << endl;
    return 0;
}