#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool static cmp(pair<int,int> a , pair<int,int> b){
        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i : nums){
            mp[i]++;
        }
        vector<pair<int,int>> sortArr;
        for(auto j : mp){
            sortArr.push_back(j);
        }
        sort(sortArr.begin() , sortArr.end() , cmp);
        vector<int> ans;
        for(auto x : sortArr){
            if(k>0){
                ans.push_back(x.first);
            }
            k--;
        }
        return ans;

    }
};