#include <iostream>
#include <vector>
using namespace std;

int SingleElementinSortedArray(vector<int> &a)
{
    int n = a.size(), st = 0, end = n - 1;
    if (n == 1) //single element in array
    {
        return a[0];
    }
    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (mid == 0 && a[0] != a[1]) //if mid is the first element
        {
            return a[mid];
        }
        if (mid == (n - 1) && a[n - 1] != a[n - 2]) //if mid is the last element
        {
            return a[mid];
        }

        if (a[mid - 1] != a[mid] && a[mid] != a[mid + 1]) //if mid is the answer
        {
            return a[mid];
        }
        if (mid % 2 == 0) // even
        {
            if (a[mid - 1] == a[mid]) // left
            {
                end = mid - 1;
            }
            else // right
            {
                st = mid + 1;
            }
        }
        else // odd
        {
            if (a[mid - 1] == a[mid]) //right
            {
                st = mid + 1;
            }
            else //left
            {
                end = mid - 1;
            }
        }
    }
}

int main()
{
    //sorted array
    vector<int> vec1 = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    vector<int> vec2 = {3,3,7,7,10,11,11};
    cout << SingleElementinSortedArray(vec2);
    return 0;
}