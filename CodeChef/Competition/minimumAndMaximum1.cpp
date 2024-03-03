#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0 ; i<n ; i++){
	        arr[i] = i+1;
	    }
	    
	    // int minVar = INT_MAX;
	    // int sum = 0 ;
	    // for(int i = 0 ; i < n-1 ; i ++){
	    //     minVar = min(arr[i],arr[i+1]);
	    //     sum = sum + minVar;
	    // }
	    // if(n%2 == 0){
	    //     cout<<sum<<endl;
	    // }else{
	    //     cout<<sum+1<<endl;
	    // }
	    cout<<2*(n-1)<<endl;
		
	}

}
