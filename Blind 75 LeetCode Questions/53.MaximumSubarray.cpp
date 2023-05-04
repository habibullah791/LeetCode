#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int maxSubArray(vector<int> &nums)
{

    int sum = 0;
    int maxi = nums[0];

    for (int i = 0; i < nums.size(); i++)
    {
        sum = sum + nums[i];
        maxi = std::max(sum, maxi);

        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}

int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int res = maxSubArray(nums);
    cout << res << endl;
    return 0;
}