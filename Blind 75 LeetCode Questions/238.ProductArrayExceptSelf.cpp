#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    vector<int> res;

    int prefix = 1;

    for (int i = 0; i < nums.size(); i++)
    {
        res.push_back(prefix);
        prefix *= nums[i];
    }

    int postfix = 1;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        res[i] *= postfix;
        postfix *= nums[i];
    }

    return res;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> res = productExceptSelf(nums);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}