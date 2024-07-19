#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;


class Solution {
public:
    static bool cmp(pair<char,int> a , pair<char,int> b){
        

        return a.second>b.second;
    }
    string frequencySort(string s) {
        unordered_map <int,int> mp;
        for(char i : s){
            mp[i]++;
        }
        
        string ans = "";
        vector<pair<char,int>> v;
        
        for(auto j :mp){
            v.push_back(j);
        }

        sort(v.begin() , v.end() , cmp);
        for(int i = 0 ; i < v.size() ; i++){
            for(int j = 0 ; j <v[i].second ;j++){
                ans += v[i].first;
            }
        }
        return ans;
    }
};