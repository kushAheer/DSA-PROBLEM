#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int maxValue = 0;
	    if(a+b+c == 101){
	        
    	    if(a>b && a>50){
    	        maxValue = max(a,c);
    	        
    	    }else if(b>a && b>50){
    	        
    	        maxValue = max(b,c);
    	        
    	    }else if(c>a && c>50){
    	        
    	        maxValue = max(c,b);
    	        
    	    }
    	    if(maxValue == a){
    	        
    	        cout<<"A"<<endl;
    	        
    	    }else if(maxValue == b){
    	        
    	        cout<<"B"<<endl;
    	        
    	    }else if(maxValue == c){
    	        cout<<"C"<<endl;
    	    }
    	    else{
    	        cout<<"NOTA"<<endl;
    	    }
	    }else{
	        cout<<"NOTA"<<endl;
	    }
	}

}
