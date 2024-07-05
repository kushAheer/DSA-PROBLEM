#include<iostream>
using namespace std;


class Solution {
public:
    int maxDepth(string s) {
        
        int maxPa = 0;
        int count = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '('){
                
                count++;
            }
            if(s[i] == ')'){
                
                count--;
                
            }
            maxPa = max(maxPa ,count);
        }
        return maxPa;
    }
};