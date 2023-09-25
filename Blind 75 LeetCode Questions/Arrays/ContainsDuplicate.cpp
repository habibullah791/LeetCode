#include<iostream>
#include <vector>
#include <unordered_map>
using namespace std;

   bool containsDuplicate(vector<int>& nums) {
        
        unordered_map<int, int> map;

        for (int i = 0; i< nums.size(); i++){
            if(map.find(nums[i]) != map.end()){
                return true;
            }
            else{
                map[nums[i]] = i;
            }
        }
        return false;
}

int main(){
    vector<int> nums =  {1,2,3,1};
    bool res = containsDuplicate(nums);

    cout<< res ? "Contain Duplicate ": "Not Contain Duplicate";

}