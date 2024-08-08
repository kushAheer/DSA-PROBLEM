#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0 ;
        int right = nums.size() -1;

        while(left<right){
            int sum = nums[left] + nums[right];
            if(sum == target){
                return {left + 1 , right + 1};
            }

            if(sum > target){
                right--;
            }else{
                left++;
            }
        
        }
        return {-1,-1};

    }
};