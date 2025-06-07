#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //imagine every day as selling day
    vector<int> price = {7, 1, 5, 3, 6, 4};
    int maxProfit = 0, bestBuy = price[0];
    for (int i = 1; i < price.size(); i++) // i=1 becoz -> we can't sell stock on 1st day
    {
        if (price[i] > bestBuy) 
        { 
            maxProfit = max(maxProfit, price[i] - bestBuy);
        }
        bestBuy = min(bestBuy, price[i]);
    }
    cout << "max profit: " << maxProfit << endl;

    return 0;
}