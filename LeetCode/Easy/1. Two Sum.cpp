#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> mp;
        vector<int> ans;
        int index = 0 ;
        for(int j : nums){
            
            mp[j] = index;
            index++;
        }
        for(int i = 0 ; i <nums.size() ; i++){
            int sum = target - nums[i];
            if( mp.count(sum) && mp[sum] != i ){
                return {i,mp[sum]};
            }
        }
        return {};
    }
};