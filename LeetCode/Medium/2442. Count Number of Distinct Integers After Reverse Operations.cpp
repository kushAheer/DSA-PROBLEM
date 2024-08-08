#include<unordered_map>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_map <int,int> mp;
        for(int i = 0 ; i < nums.size() ;i++){
            int remainder = 0;
            mp[nums[i]]++;
            while(nums[i]){
                int digit = nums[i]%10;
                remainder = remainder * 10 + digit;
                nums[i] = nums[i]/10;
            }
            mp[remainder]++;
        }
        return mp.size();
    }
};