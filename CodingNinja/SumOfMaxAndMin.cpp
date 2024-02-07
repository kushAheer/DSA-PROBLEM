#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int sumOfMaxMin(int arr[], int n){
	if(n == 1){
		return arr[0] + arr[0];
	}
	// Write your code here.
	int minVal = INT_MAX;
	int maxVal = INT_MIN;
	for(int i = 0 ; i<n-1 ; i++){
		if(arr[i]<=arr[i+1]){
			int val = arr[i];
			int val1 = arr[i + 1];
			minVal = min(minVal,val);
			maxVal = max(maxVal,val1);
		}else{
			int val = arr[i + 1];
			int val1 = arr[i];
			minVal = min(minVal,val);
			maxVal = max(maxVal,val1);
		}
	}
	return minVal + maxVal;
}

int main(){
    int arr[7] = {1,2,4,5,6,6,6};
    cout<<sumOfMaxMin(arr,7);


    return 0 ;
}