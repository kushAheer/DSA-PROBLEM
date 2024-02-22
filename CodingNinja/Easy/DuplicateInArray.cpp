#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;
int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    
    int element =0;
    int len = sizeof(arr)/sizeof(arr[0]);
    sort(arr.begin(), arr.end()); 
    for(int i = 0; i<arr.size()-1; i ++){
        if(arr[i] == arr[i+1]){
            element = arr[i];
        }
    }
    return element;
	
}
int main(){

}