#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int left = 0;
    int right = 1;
    int diff = 0;
    int profit = 0;

    while (right < prices.size())
    {
        if (prices[left] < prices[right])
        {
            diff = prices[right] - prices[left];
            profit = std::max(diff, profit);
        }
        else{
            left = right;
        }
        right++;
    }

    return profit;
}

int main()
{
    vector<int> nums = {7,1,5,3,6,4};
    int res = maxProfit(nums);

    cout << "Result is : " << res;
}