#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map <char,int> mp;
        
        for(char i : t){
            mp[i]++;
        }
        for(char i : s){
            mp[i]--;

        }
        int count = 0;
        for(auto j : mp){
            if(j.second > 0 ){
                count = count + j.second;
            }
        }
        return count;
    }
};