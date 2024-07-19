#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();
        vector<int> ans;
        for(int i : nums){
            mp[i]++;
        }
        for(auto j : mp){
            if(j.second > n/3){
                ans.push_back(j.first);
            }
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<int> nums = {3,2,3};
    vector<int> ans = s.majorityElement(nums);
    for(int i : ans){
        cout<<i<<" ";
    }
    return 0;
}