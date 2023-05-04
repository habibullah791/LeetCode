#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int maxProfit(vector<int> &prices)
{

    int l = 0;
    int r = 1;
    int max = 0;
    int profit = 0;

    while (r < prices.size())
    {
        if (prices[l] < prices[r])
        {
            int diff = prices[r] - prices[l];
            profit = std::max(profit, diff);
        }
        else
        {
            l = r;
        }
        r++;
    }
    return profit;
}
int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int profit = maxProfit(prices);
    cout << profit << endl;
    return 0;
}