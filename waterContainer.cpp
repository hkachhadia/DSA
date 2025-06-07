#include <iostream>
#include <vector>
using namespace std;

int bruteforce(vector<int> &height)
{ // O(n^2)
    int maxWater = 0, w, h, currWater;
    for (int i = 0; i < height.size(); i++)
    {
        for (int j = i + 1; j < height.size(); j++)
        {
            w = j - i;
            h = min(height[i], height[j]);
            currWater = h * w;
            maxWater = max(maxWater, currWater);
        }
    }
    return maxWater;
}
int TwoPointer(vector<int> &height)
{ // O(n)
    int maxWater = 0, w, h, currWater, lp = 0, rp = height.size() - 1;
    while (lp < rp)
    {
        w = rp - lp;
        h = min(height[lp], height[rp]);
        currWater = h * w;
        maxWater = max(maxWater, currWater);
        height[lp] < height[rp] ? lp++ : rp--; // shifting -> minimum height pointer will be shifting
    }
    return maxWater;
}
int main()
{
    vector<int> height = {1,3,2,6,8,7,4,1};

    cout << "container with most water = " << bruteforce(height) << endl;
    cout << "container with most water = " << TwoPointer(height) << endl;

    return 0;
}