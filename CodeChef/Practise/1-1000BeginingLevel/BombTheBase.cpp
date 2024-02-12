#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        
        int n,bomb;
        cin>>n>>bomb;
        int strengthArr[n];
        int element;
        int data = 0;
        
        for(int i= 1 ; i<=n ;i++){
            cin>>element;
            strengthArr[i] = element;
            if(bomb>strengthArr[i]){
                data = i;
            }
        }
      
        cout<<data<<endl;
        
    }
}
