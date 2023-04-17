#include <iostream>
#include <vector>
using namespace std;

int leftMost(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    int mid = (start + end) / 2;
    int result = -1;

    while (start <= end)
    {
        if (nums[mid] == target)
        {
            result = mid;
            end = mid - 1;
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

    return result;
}
int rightMost(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    int mid = (start + end) / 2;
    int result = -1;

    while (start <= end)
    {
        if (nums[mid] == target)
        {
            result = mid;
            start = mid + 1;
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

    return result;
}

vector<int> searchRange(vector<int> &nums, int target)
{
    int left = leftMost(nums, target);
    int right = rightMost(nums, target);

    vector<int> result = {left, right};
    return result;

}

int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 8, 8, 10};
    int target = 8;

    vector<int> num = searchRange(nums, target);

    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }
}
