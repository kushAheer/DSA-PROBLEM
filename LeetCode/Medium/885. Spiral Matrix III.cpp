#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> result;
        vector<vector<int>>direction = {
            {0,1},//east
            {1,0},//south
            {0,-1},//west
            {-1,0}//north
        };
        int dir = 0 ;
        int step = 0;  
        result.push_back({rStart , cStart});
        while(result.size() < rows * cols){
            if(dir == 0 || dir == 2){
                step++;
            }
            for(int i = 0 ; i < step ; i++){
                rStart = rStart + direction[dir][0]; //x
                cStart = cStart + direction[dir][1];//y
                if( rStart >= 0 && rStart < rows && cStart < cols && cStart >= 0){

                    result.push_back({rStart,cStart});
                }
            }
            dir = (dir + 1) % 4;

        }
        return result;
    }
};