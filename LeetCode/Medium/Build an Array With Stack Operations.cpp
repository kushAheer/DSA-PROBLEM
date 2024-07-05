#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        stack<int> st;
        
        int index = 0;
        for(int i = 1 ; i<=n && index<target.size() ; i++){
            
            if(i == target[index]){
                ans.push_back("Push");
                index++;
            }else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            
        }

        return ans;
    }
};