#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int findMin(vector<int> &nums)
{

    int left = 0;
    int right = nums.size() - 1;

    while (left < right)
    {

        int mid = left + (right - left) / 2;
        if (mid > 0 && nums[mid] < nums[mid - 1])
        {
            return nums[mid];
        }
        else if (nums[left] <= nums[mid] && nums[mid] >= nums[right])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return nums[left];
}

int main()
{

    vector<int> nums = {3, 4, 5, 1, 2};

    cout << findMin(nums) << endl;

    return 0;
}