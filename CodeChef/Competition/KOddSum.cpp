#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int n,k;
	    
	    cin>>n>>k;
	    
	    int permuArray[n];
	    int element;
	    int indexCount = 0 ;
	    
	    for(int i=1;i<n+1;i++){
	       
	        permuArray[indexCount] = i;
	        
	        indexCount++;
	    }
	    int oddSum = 0;
	    int sum = 0;
	    for(int i = 0; i<n-1;i++){
	        sum = permuArray[i] + permuArray[i+1];
	        if(sum%2!=0){
	            oddSum++;
                cout<<"Inside !"<<endl;
	        }
            cout<<"Sum : "<<sum<<endl;
	    }
	    if(oddSum == k){
	        for(int i:permuArray){
	            cout<<i<<endl;
	        }
	    }
	   
	    t--;
	}

}
