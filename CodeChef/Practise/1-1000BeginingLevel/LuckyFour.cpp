#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t>0){
        int count = 0;
        string s;
        cin>>s;
        for(int i = 0; i<s.size();i++){
            if(s[i] == '4'){
                count++;                
            }
        }
        cout<<count<<endl;
        
	    t--;
    }
}
