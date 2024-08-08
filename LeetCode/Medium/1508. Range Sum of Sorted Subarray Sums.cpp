// Problem: Range Sum of Sorted Subarray Sums
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;


class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> arr;

        for(int i = 0 ; i < n  ; i++){
            int sum = 0 ;
            for(int j = i;  j < n ; j++){
                sum = sum + nums[j];
                arr.push_back(sum);
            }
        }
        sort(arr.begin() , arr.end());
        int ans = 0 ;
        int mod = 1e9 + 7;
        for(int l = left - 1; l < right ; l++ ){
            
            ans = (ans + arr[l]) % mod;

        }
        return ans;
        
    }
};