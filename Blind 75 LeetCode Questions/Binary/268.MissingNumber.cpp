#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int missingNumber(vector<int> &nums)
{

    int n = nums.size();
    int origSum = n * (n + 1) * 0.5;
    int sum = std::accumulate(nums.begin(), nums.end(), 0);

    return origSum - sum;
}

int main()
{
    vector<int> nums = {3, 0, 1};
    cout << missingNumber(nums) << endl;
    return 0;
}