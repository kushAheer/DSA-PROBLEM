#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int index = 0 ;
        vector<int> ans;
        for(auto w : words){
            for(char ch : w){
                if(ch == x){
                    ans.push_back(index);
                    break;
                }
            }
            index++;
        }
        return ans;
    }
};