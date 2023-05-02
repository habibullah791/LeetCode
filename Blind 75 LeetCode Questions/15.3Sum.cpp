#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{

    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());

    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        int a = nums[i];
        int target = -a; // b+c = -a
        int l = i + 1;
        int r = n - 1;

        while (l < r)
        {

            if (nums[l] + nums[r] == target)
            {
                ans.push_back({nums[i], nums[l], nums[r]});
                if (l < r && nums[i] == nums[i + 1])
                {
                    l++;
                    r--;
                }

                l++;
                r--;
            }
            else if (nums[l] + nums[r] > target)
            {
                r--;
            }
            else if (nums[l] + nums[r] < target)
            {
                l++;
            }
        }

        if (l < r && nums[i] == nums[i + 1])
        {
            i++;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = threeSum(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}