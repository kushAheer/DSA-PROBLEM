#include <iostream>
#include <vector>
using namespace std;


int findPeakElement(vector<int> &arr) {
    // Write your code here
    int maxElement = 0;
    for(int i = 0 ; i<arr.size()-1;i++){
        if(arr[i]<arr[i+1]){
            maxElement = i+1;
        }else if(arr[i]>arr[i+1]){
            maxElement = i;
        }
    }
    return maxElement;
}

int main(){

    vector<int> arr = {5,4,3,2,1};
    cout<<findPeakElement(arr);
}