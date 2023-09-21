#include<iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> umap;

    int diff = 0;

    for(int i = 0; i < nums.size(); i++){

        diff = target - nums[i];

        if(umap.find(diff) != umap.end()){
          return {i, umap[diff]};
        }
        umap[nums[i]] = i;
    }

    return {};
}


int main(){
    vector<int> nums =  {2,7,11,15};
    int target = 9;
    vector<int> res = twoSum(nums, target);

    cout<<"Result is : "<<res[0]<<" , "<<res[1]<<endl;

}