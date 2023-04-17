#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else if (nums[mid] > target)
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return start;
}

int main()
{
    vector<int> nums = {1, 3, 5, 6};
    int target = 7;
    cout << searchInsert(nums, target) << endl;
    return 0;
}