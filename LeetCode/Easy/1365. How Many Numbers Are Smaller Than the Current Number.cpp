#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n);
        for(int i = 0 ; i < n; i++){
            int minCount = 0;
            for(int j = 0 ; j < nums.size() ;j++){
                if(nums[i] > nums[j] && i!=j && nums[j] != nums[i]){
                    minCount++;
                }
            }
            arr[i] = minCount;
        }    
        return arr;
    }
};