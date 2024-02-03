#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int countAddy = 0;

        int maxAddy = INT_MIN;
        
        int countOm = 0;

        int maxOm = INT_MIN;
        
        for(int i= 0 ; i<n ; i++){
            if(a[i] == 0){
                countAddy = 0;
            }else{
                countAddy ++;
                maxAddy = max(maxAddy,countAddy);
            }
            if(b[i] == 0){
                
                countOm = 0;
            }else{
                countOm ++;
                maxOm = max(maxOm,countOm);
            }
        }

        if(maxAddy>maxOm){
            cout<<"Om"<<endl;
        }else if(maxAddy == maxOm){
            cout<<"Draw"<<endl;
        }else{
            cout<<"Addy"<<endl;
        }
        
    }
	// your code goes here

}
