#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int totalLimak , totalBob;
	    cin>>totalLimak>>totalBob;
	    int sumLimak = 0;
	    int sumBob = 0;
	    
	    
	    for(int i = 1 ; ; i++){
	        if(i%2==0){
	            sumBob = sumBob + i;
	            if(sumBob>totalBob){
	                cout<<"Limak"<<endl;
	                break;
	            }
	        }else{
	            sumLimak = sumLimak + i;
	            if(sumLimak>totalLimak){
	                cout<<"Bob"<<endl;
	                break;
	            }
	        }
	    }
	}

}
