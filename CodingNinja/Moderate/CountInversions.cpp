#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

long long getInversions(long long *arr, int n){
    // Write your code here.
    long long int count = 0;
    for(int i =0 ; i<n; i ++){
        for(int j = i + 1 ; j<n ; j++){
            if(arr[i]>arr[j] && i<j){
                count++;
            }
        }
    }
    return count;
}

int main(){
    long long int arr[5] = {2,5,1,3,4};
    cout<<getInversions(arr,5);
    return 0 ;
}