#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int> &height)
{
    int maxVolume = 0;
    int right = height.size() - 1, left = 0, temp = 0;

    while (left != right)
    {
        if (height[left] < height[right])
        {
            if (left == 0)
            {
                temp = height[left] * right;
            }
            else
            {
                temp = height[left] * (right - left);
            }
            left++;
        }
        else
        {
            temp = height[right] * (right - left);
            right--;
        }
        maxVolume = max(maxVolume, temp);
    }

    return maxVolume;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(height);
    return 0;
}