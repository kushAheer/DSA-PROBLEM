#include <iostream>
#include <vector>
using namespace std;


int search(vector<int> &nums, int target) {
    // Write your code here.
    int position = 0;
    int flag = 0;
    for(long int i = 0; i<nums.size();i++){
        if(nums[i] == target){
            flag = 1;
            return i;
        }
    }
    if(flag == 0){
        return -1;
    }
    return 0;
}

int main(){
    vector <int> nums = {1 , 3 ,7 ,9,11,12,45};
    cout<<search(nums,3);
    return 0 ;
}