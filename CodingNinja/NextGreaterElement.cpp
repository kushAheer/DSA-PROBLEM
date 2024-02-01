#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
using namespace std;


vector<int> nextGreater(vector<int> &arr, int n) {
    // Write your code here
    vector<int> nextGreater[n];
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]<arr[i+1]){
            nextGreater->push_back(arr[i+1]);
        }else{
            nextGreater->push_back(-1);
        }
    }
    return nextGreater[n];

}
int main(){
    vector <int> nums = {1,3,2};
    vector<int> greaterArray =  nextGreater(nums,3);
    for(int i : greaterArray){
        cout<<i<<endl;
    }
    return 0 ;
}