#include <iostream>

#include <vector>

using namespace std;

int max(vector<int> &a, int n)
{
    int largest = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        largest = max(a[i], largest);
    }
    return largest;
}
int sum(vector<int> &a, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}
bool isPossible(vector<int> &a, int n, int m, int maxAllowedtime)
{
    int painter = 1, time = 0;
    for (int i = 0; i < n; i++)
    {
        if (time + a[i] <= maxAllowedtime)
        {
            time += a[i];
        }
        else
        {
            painter++;
            time = a[i];
        }
    }
    if (painter <= m)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int PaintersProblem(vector<int> &a, int n, int m) //Variation of Book allocation
{
    int st = max(a, n), end = sum(a, n), ans = -1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isPossible(a, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> vec = {40, 30, 10, 20};
    int n = 4, m = 2;
    cout << PaintersProblem(vec, n, m) << endl;
    return 0;
}