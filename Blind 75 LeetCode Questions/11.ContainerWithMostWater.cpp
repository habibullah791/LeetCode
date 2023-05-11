#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int maxArea(vector<int> &height)
{
    int left = 0;
    int right = height.size() - 1;
    int maxVolume = 0;
    int temp = 0;

    while (left <= right)
    {
        if (height[left] < height[right])
        {
            temp = height[left] * (right - left);
            left++;
        }
        else
        {
            temp = height[right] * (right - left);
            right --;
        }

        maxVolume = max(temp, maxVolume);
    }

    return maxVolume;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(height);
    return 0;
}