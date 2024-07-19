#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        
        unordered_map<int,int> mp;
        vector<int> ans(queries.size());
        vector<int> occ;
        
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == x){
                occ.push_back(i);
            }
        }
        
        for(int i = 0 ; i < queries.size() ; i++){
            if(queries[i] <= occ.size()){
                ans[i] = occ[queries[i] - 1];

            }else{
                ans[i] = -1;
            }
        }
        


        return ans;
    }
};