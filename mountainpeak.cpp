#include <iostream>
#include <vector>

using namespace std;

int mountainpeak(vector<int> &arr) //O(logn)
{
    int n = arr.size();
    int s = 1, e = n - 2;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid - 1]<arr[mid] && arr[mid]> arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid - 1] < arr[mid]) //right
        {
            s = mid + 1;
        }
        else //left
        {
            e = mid - 1;
        }
    }
}
int main()
{
    vector<int> vec = {0, 3, 8, 9, 5, 2};
    cout << "peak element found at " << mountainpeak(vec);
    return 0;
}