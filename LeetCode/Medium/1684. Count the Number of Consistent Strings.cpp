#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map <char,int> al;
        for(char i : allowed){
            al[i]++;
        }
        int count = 0;
        bool flag = true;
        for(auto i : words){
            for(char j : i){
                if(al.find(j)!=al.end()){
                    flag = true;
                }else{
                    flag = false;
                    break;
                }
            }
            if(flag == true){
                count++;
            }
        }
        return count;

    }
};