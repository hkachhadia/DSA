#include <iostream>

#include <vector>

using namespace std;

vector<int> bubblesort(vector<int> &a) // O(n^2)
{
    for (int i = 0; i < (a.size() - 1); i++) // runs (n-1) times
    {
        bool isSwap = false; // optimisation
        for (int j = 0; j < (a.size() - i - 1); j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                isSwap = true;
            }
        }
        if (!isSwap) // array is already sorted
        {
            return a;
        }
    }
    return a;
}

vector<int> selectionsort(vector<int> &a) // O(n^2)
{
    for (int i = 0; i < a.size() - 1; i++) // runs (n-1) times
    {
        int smallestIdx = i;
        for (int j = i; j < a.size(); j++)
        {
            if (a[j] < a[smallestIdx])
            {
                smallestIdx = j;
            }
        }
        swap(a[i], a[smallestIdx]);
    }
    return a;
}

vector<int> insertionsort(vector<int> &a) // O(n^2)
{
    for (int i = 1; i < a.size(); i++) // runs (n-1) times
    {
        int curr = a[i];
        int prev = i - 1;
        while (prev >= 0 && a[prev] > curr)
        {
            a[prev + 1] = a[prev];
            prev--;
        }
        a[prev + 1] = curr;
    }
    return a;
}
int main()
{
    vector<int> vec = {5, 2, 3, 1};
    vector<int> x = insertionsort(vec);
    int i;
    for (i = 0; i < vec.size(); i++)
    {
        cout << x[i] << " ";
    }
    cout << "\ni = " << i << endl;
    return 0;
}