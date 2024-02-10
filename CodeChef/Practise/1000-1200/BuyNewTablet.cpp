#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n , b ,area,best;
	    int maxArea = 0;
	    cin>>n>>b;
	    int prizeArray [n];
	    int width[n];
	    int height[n];
	    
	    for(int i = 0 ; i < n ; i++){
	        cin>>width[i];
	        cin>>height[i];
	        cin>>prizeArray[i];
	        
	    }
	    for(int i = 0 ; i<n ; i ++){
            int preArea = 0;
	        if(b>=prizeArray[i]){
	            area = width[i] * height[i];
	            maxArea = max(maxArea,area);
	        }
	    }
	    if(maxArea !=0){
	        cout<<maxArea<<endl;
	    }else{
            cout<<"no tablte"<<endl;
        }
	    
	}

}
