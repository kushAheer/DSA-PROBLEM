#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int sum = 0 ;
        for(auto words : operations){
            for(char op : words){
                if(op == '+'){
                    sum = sum + 1;
                    break;
                }else if(op == '-'){
                    sum = sum - 1;
                    break;
                }
            }
        }
        return sum;
    }
};