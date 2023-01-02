#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sortArray(vector<int> unSorted);
// double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2);

vector<int> sortArray(vector<int> unSorted)
{
    int temp;

    for (size_t i = 0; i < unSorted.size(); i++)
    {
        for (size_t j = i; j < unSorted.size(); j++)
        {
            if (unSorted[i] > unSorted[j])
            {
                temp = unSorted[i];
                unSorted[i] = unSorted[j];
                unSorted[j] = temp;
            }
        }
    }

    return unSorted;
}
double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    double median;
    nums1.insert(nums1.end(), nums2.begin(), nums2.end());

    sort(nums1.begin(), nums1.end());

    if (nums1.size() % 2 != 0)
    {
        return median = nums1[nums1.size() / 2];
    }
    else
    {
        return median = (nums1[nums1.size() / 2] + nums1[nums1.size() / 2 - 1]) / 2.0;
    }
}
int main()
{
    vector<int> array1 = {1, 2, 6, 4, 5, 9, 7}, array2 = {3, 4};
    double median = findMedianSortedArrays(array1, array2);

    cout << "Median of Two sorted arrays : " << median;

    return 0;
}