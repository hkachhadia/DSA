#include <iostream>

#include <vector>

using namespace std;

vector<int> MergeTwoSorted(vector<int> &a, vector<int> b)
{
    int n = a.size(), m = b.size();
    int idx = m + n - 1, i = m - 1, j = n - 1;
    while (i >= 0 && j >= 0)
    {
        if (a[i] >= b[j])
        {
            a[idx--] = a[i--];
        }
        else
        {
            a[idx--] = b[j--];
        }
    }
    while (j >= 0)
    {
        a[idx--] = b[j--];
    }

    for (int k = 0; k < m + n; k++)
    {
        cout << a[k] << " ";
    }
}
int main()
{
    vector<int> a = {4, 5, 6};
    vector<int> b = {1, 2, 3};
    MergeTwoSorted(a, b);

    return 0;
}