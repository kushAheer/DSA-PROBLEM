#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int sum  = n/7 ;
	    for(int i = 1 ; i<8;i++){
	        sum = sum*2;
	    }
	    if(sum>n){
	        cout<<"NO"<<endl;
	    }else{
	        cout<<"YES"<<endl;
	    }
	}

}
