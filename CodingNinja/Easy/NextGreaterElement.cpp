#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
using namespace std;
void printNumber(vector<int> &arr , vector<int> &nextGreater){

    for(int i=0;i<arr.size()-1;i++){
        
        if(arr[i]<arr[i+1]){
            
            nextGreater[i] = arr[i+1];
        }else{
            
            nextGreater.at(i) = -1;
        }
        
    }
    nextGreater.at(arr.size()-1) = -1;
    for(int i : nextGreater){
        cout<<i<<endl;
    }
    
}

vector<int> nextGreater(vector<int> &arr, int n) {
    // Write your code here
    vector<int> nextGreater(n);
    printNumber(arr,nextGreater);
    return nextGreater;

}
int main(){
    vector <int> arr = {7,12,1,20};
    vector<int> greaterArray =  nextGreater(arr,4);
    
    
    return 0 ;
}