#include <iostream>

#include <vector>

using namespace std;


void SlightlyOptimised(vector<int> &a) //O(n) ->2 pass sc-O(1)
{
    int n = a.size();
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            count0++;
        else if (a[i] == 1)
            count1++;
        else
            count2++;
    }
    int idx = 0;
    for (int i = 0; i < count0; i++)
    {
        a[idx++] = 0;
    }
    for (int i = 0; i < count1; i++)
    {
        a[idx++] = 1;
    }
    for (int i = 0; i < count2; i++)
    {
        a[idx++] = 2;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
        
    }
}
void DNFalgo(vector<int> &a) // O(n) ->1 pass sc-O(1)
{
    //Dutch National Flag Algorithm
    int n = a.size();
    int low = 0, mid = 0, high = n-1;
    while (mid <= high)
    {
        if (a[mid] == 0)
        {
            swap(a[low], a[mid]);
            mid++;
            low++;
        }
        else if (a[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(a[high], a[mid]);
            high--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    vector<int> vec = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    // SlightlyOptimised(vec);
    DNFalgo(vec);
    return 0;
}