#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int findMin(vector<int> &nums, int target)
{

    int left = 0;
    int right = nums.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] >= nums[left])
        {
            if (target >= nums[left] && target < nums[mid])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        else
        {
            if (target <= nums[right] && target > nums[mid])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    }

    return -1;
}
int main()
{

    vector<int> nums = {5,1,3};
    int target = 5;

    cout << findMin(nums, target) << endl;

    return 0;
}