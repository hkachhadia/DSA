#include <iostream>
#include <vector>
using namespace std;
int SearchinRoatatedSortedArray(vector<int> &arr, int target) //O(logn)
{
    int n = arr.size();
    int st = 0, end = n - 1, mid;
    while (st <= end)
    {
        mid = st + (end - st) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[st] <= arr[mid])
        {

            if (arr[st] <= target && arr[mid] >= target)
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= target && arr[end] >= target)
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
}
int main()
{
    vector<int> vec = {3, 4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    cout << target << " found at " << SearchinRoatatedSortedArray(vec, target) << endl;
    return 0;
}