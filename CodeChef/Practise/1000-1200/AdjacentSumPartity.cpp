#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// int sum(int arr[] , int n, int sumNumber , int i){
    
//     if(n>i){
//         sumNumber = sumNumber + arr[i]
//         sum(arr)
//     }
// }


int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t>0){
        int n ;
        cin>>n;
        int binaryArray[n];
        int element;
        for(int i=0;i<n;i++){
            cin>>element;
            binaryArray[i] = element;
        }
        int sum = 0;
        for(int i = 0 ; i<n ; i++){
            sum = sum + binaryArray[i];
        }
        if(sum%2 == 0 ){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        
        
        t--;
    }
    
}
