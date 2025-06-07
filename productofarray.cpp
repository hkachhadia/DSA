#include <iostream>
#include <vector>
using namespace std;

vector<int> bruteforce(vector<int> &nums, int n)
{                          // O(n^2)
    vector<int> ans(n, 1); // vector -> ans(size,value) -> o/p = {1,1,1,1,1,1,1,1,1...n}
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                ans[i] *= nums[j];
            }
        }
    }
    return ans;
}

vector<int> Optimal(vector<int> &nums, int n)
{//TC=O(n)

    //SC =O(n)

    // vector<int> prefix(n,1);
    // vector<int> suffix(n,1);
    // vector<int> ans(n,1);
    // prefix[0] = 1;
    // suffix[n - 1] = 1;
    
    //prefix

    // for (int i = 1; i < n; i++)
    // {
    //     prefix[i] = prefix[i - 1] * nums[i - 1];
    // }

    //suffix

    // for (int i = n - 2; i >= 0; i--)
    // {
    //     suffix[i] = suffix[i + 1] * nums[i + 1];
    // }

    //ans

    // for (int i = 0; i < n; i++)
    // {
    //     ans[i] = prefix[i] * suffix[i];
    // }
    // return ans;

    //SPACE COMPLEXITY OPTIMISATION-->O(1)
    vector<int> ans(n,1);
    int suffix = 1;
    
    //prefix ==> ans
    for (int i = 1; i < n; i++)
    {
        ans[i] = nums[i-1] * ans[i-1];
    }

    //suffix ==> ans
    for (int i = n - 2; i >= 0; i--)
    {
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }

    
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    int n = nums.size();
    // vector<int> x = bruteforce(nums, n);
    vector<int> x = Optimal(nums, n);
    for (int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }
    return 0;
}