#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> firstHalf(n);
        vector<int> secoundHalf;
        vector<int> ans;
        for(int i = 0 ; i < n ; i++){
            firstHalf[i] = nums[i];
        }
        for(int i = n ; i < 2*n ; i++){
            secoundHalf.push_back(nums[i]);
        }
        for(int i = 0 ; i < n ; i++){
            
                ans.push_back(firstHalf[i]);
                ans.push_back(secoundHalf[i]);
            
        }
        return ans;
    }
};