#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> end;
    unordered_map<int, int> map;

    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        if (map.find(complement) != map.end())
        {
            end.push_back(map[complement]);
            end.push_back(i);
            return end;
        }
        map[nums[i]] = i;
    }
    return end;
}
int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> end = twoSum(nums, target);
    for (int i = 0; i < end.size(); i++)
    {
        cout << end[i] << " ";
    }
    cout << endl;
}