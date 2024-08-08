#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;


class Solution {
public:

    bool static compareByFrequency(pair<string,int> &a , pair<string,int> &b){
        if(a.second == b.second){
            return b.first>a.first;
        }
        return a.second > b.second;
    
    }


    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string , int> mp;
        for(string i : words){
            mp[i]++;
        }
        vector<string> ans;

        vector<pair<string,int>> sortArr;

        for(auto x : mp){
            sortArr.push_back(x);
        }

        sort(sortArr.begin() , sortArr.end() , compareByFrequency);
        for(auto y : sortArr){
            if(k>0){

                ans.push_back(y.first);
            }
            k--;
        }
        
        return ans;
    }
};