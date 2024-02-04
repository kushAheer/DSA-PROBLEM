#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        
        char words[n];
        char charater;
        int consecutive = 0 ;
        
        
        for(int i = 0 ; i<n;i++){
            cin>>charater;
            words[i] = charater;
            
        }
        for(int i = 0; i<n;i++){
            if(words[i] != 'a' && words[i] != 'e' && words[i] != 'i' && words[i] != 'o' && words[i] != 'u' ){
                consecutive ++ ;
                if(consecutive>=4){
                    break;
                }
            }else{
                
                consecutive = 0;
            }
        }
        if(consecutive <4){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        t--;
        
    }
}
