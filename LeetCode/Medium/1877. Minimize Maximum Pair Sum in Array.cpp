#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int sum = 0 ;
        int n = nums.size();
        int maxSum = 0 ;
        sort(nums.begin() , nums.end());
        for(int left = 0 , right = n - 1 ; left<right ; left++ , right--){

            sum = nums[left] + nums[right];
            maxSum = max(maxSum , sum);

        }
        return maxSum;
    }
};