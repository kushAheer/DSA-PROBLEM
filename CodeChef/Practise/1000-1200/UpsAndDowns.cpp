#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int array[n];
	    for(int i = 0 ; i < n ; i ++){
	        cin>>array[i];
	        
	    }
	    for(int i = 0 ; i < n - 1 ; i ++){
	        if(i % 2 == 0 ){
	            if(array[i]>=array[i+1]){
	                int temp = array[i];
	                array[i] = array[i + 1];
	                array[i + 1] = temp;
	            }
	        }else{
	            if(array[i]<=array[i+1]){
	                int temp = array[i];
	                array[i+ 1] = array[i];
	                array[i + 1] = temp;
	            }
	        }
	    }
	    for(int i:array){
	        cout<<i;
	    }
	    cout<<endl;
	}

}
