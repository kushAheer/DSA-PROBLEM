#include<iostream>
#include<string>
#include<stack>
using namespace std;

class Solution {
public:
    string makeGood(string s) {
        if(s.length() == 1)return s;
        stack<char> st;
        string ans = "";
        for(int i = 0 ; i < s.length() ; i++){
            if(st.empty()){
                st.push(s[i]);
            }else if(isupper(st.top()) != isupper(s[i]) && tolower(st.top()) == tolower(s[i])){
                st.pop();
            }else{
                st.push(s[i]);
            }

        }
        while(!st.empty()){
            ans = ans + st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};