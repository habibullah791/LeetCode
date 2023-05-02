#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int maxProduct(vector<int> &nums)
{

    int product = 1;
    int maxi = nums[0];

    for (int i = 0; i < nums.size(); i++)
    {

        product = product * nums[i];
        maxi = std::max(product, maxi);

        if (product < 0)
        {
            product = 1;
        }
    }

    return maxi;
}

int main()
{
    vector<int> nums = {2, 3, -2, 4};

    cout << maxProduct(nums) << endl;

    return 0;
}