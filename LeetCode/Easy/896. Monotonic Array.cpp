#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool flag ; 
        bool inc = true;
        bool asc = true;
        for(int i = 0 ; i < nums.size()- 1 ; i++){

            if(nums[i] > nums[i+1]){
                inc = false;

            }else if(nums[i] < nums[i+1]){
                asc = false;
            }
        }
        return inc | asc;
    }
};