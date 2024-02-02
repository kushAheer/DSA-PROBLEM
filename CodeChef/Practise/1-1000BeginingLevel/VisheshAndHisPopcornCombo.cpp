#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int a1,a2,b1,b2,c1,c2;
	    cin>>a1>>a2;
	    cin>>b1>>b2;
	    cin>>c1>>c2;
	    int sum1 = a1+a2;
	    int sum2 = b1+b2;
	    int sum3 = c1+c2;
	     if(sum1>=sum2){
	         cout<<max(sum1,sum3)<<endl;
	     }else {
	         cout<<max(sum2,sum3)<<endl;
	     }
	    
	    
	    
	    t--;
	}

}
