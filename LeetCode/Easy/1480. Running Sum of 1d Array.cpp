#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0 ;
        int n = nums.size();
        vector<int> arr(n);
        for(int i = 0 ; i < nums.size() ; i++){
            sum = sum + nums[i];
            arr[i] = sum;
        }
        return arr;
    }
};