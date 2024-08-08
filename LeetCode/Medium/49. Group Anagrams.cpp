#include<vector>
#include<unordered_map>
#include<string>

using namespace std;


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string , vector<string>> mp;
        vector<vector<string>> ans;

        for(string i : strs){
            string word = i;
            sort(word.begin() , word.end());
            mp[word].push_back(i);
            
        }
        for(auto i : mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};