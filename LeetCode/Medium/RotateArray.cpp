#include <iostream>
#include <vector>
using namespace std;


void rotate(vector<int>& nums, int k) {
    int count  = k + 1;
    for(int i = 0 ; i <k ; i ++ ){
        
        int temp = nums[i];
        nums[i] = nums[count];
        nums[count] = temp;
        count ++;
    }
    
        
}

int main(){
    vector <int> arr = {1,2,3,4,5,6,7};
    rotate(arr,3);
    
}