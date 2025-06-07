#include <iostream>

using namespace std;

int main()
{
    // maximum subarray sum

    // brute force approach O(n^2)
    // int start, end,a[5]={1,2,3,4,5};
    // int size =5;
    // int Maxsum=INT16_MIN;
    // for (start = 0; start < size; start++)
    // {
    //     int currSum =0;
    //     for (end = start; end < size; end++)
    //     {
    //         currSum = currSum + a[end];
    //         Maxsum = max(currSum,Maxsum);
    //     }

    // }
    // cout<<"MAXIMUM SUBARRAY SUM : "<<Maxsum;

    // KADANE'S ALGO O(n)
    int currsum = 0, maxsum = INT16_MIN, size = 7;
    int a[7] = {3,-4,5,4,-1,7,-8};
    for (int i = 0; i < size; i++)
    {
        currsum += a[i];
        maxsum = max(currsum, maxsum);
        if (currsum < 0)
        {
            currsum = 0;
        }
    }
    cout << "MAXIMUM SUBARRAY SUM : " << maxsum;

    return 0;
}