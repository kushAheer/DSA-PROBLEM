#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map <int,int> mp;
        for(auto i : edges){
            for(int j : i){
                mp[j]++;
            }
        }
        int maxFrequency = 0 ;
        int maxNum = 0 ;
        for(auto i : mp){
            if(i.second>maxFrequency){
                maxNum = i.first;
                maxFrequency = max(maxFrequency , i.second);
            }
        }
        return maxNum;
    }
};