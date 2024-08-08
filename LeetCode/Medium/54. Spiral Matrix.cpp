#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top = 0; //row first 
        int down = matrix.size() - 1;//row last
        int left = 0; //column first
        int right = matrix[0].size()-1;//column last
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> result;
        int dir = 0;
        while(result.size() != row * col){
            if(dir == 0){
                for(int i = left ; i <= right ; i++){
                    result.push_back(matrix[top][i]);
                }
                top++;
            }else if(dir == 1){
                for(int i = top ; i <=down ; i++){
                    result.push_back(matrix[i][right]);
                }
                right--;
            }else if(dir == 2){
                for(int i = right ; i >= left ; i--){
                    result.push_back(matrix[down][i]);
                }
                down--;
            }else{
                for(int i = down ; i >=top ; i--){
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
            dir = (dir+1)%4;
        }
        return result;
    }
};