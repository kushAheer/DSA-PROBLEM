#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0 ;
        int sum = 0 ;
        for(auto i : accounts){
            for(int j : i){
                sum = sum + j;
            }
            maxWealth = max(maxWealth , sum);
            sum = 0 ;
        }
        return maxWealth;
    }
};