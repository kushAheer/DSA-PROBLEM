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
        
        int aliceArray[n];
        int bobArray[n];
        
        int element,element1;
        int sum1 = 0;
        int sum2 = 0;
        for(int i =0 ;i<n;i++){
            cin>>element;
            aliceArray[i] = element;
            sum1 = sum1 + aliceArray[i];
        }
        for(int i =0 ;i<n;i++){
            cin>>element1;
            bobArray[i] = element1;
            sum2 = sum2 + bobArray[i];
        }
        sort(aliceArray,aliceArray + n);
        sort(bobArray,bobArray + n);

        sum1 = sum1 - aliceArray[n-1];
        sum2 = sum2 - bobArray[n-1];
        
        // int maxAlice = 0;
        // int maxbob = 0;

        // for(int i=0;i<n;i++){
        
        //     if(aliceArray[i]>=maxAlice){
        //         maxAlice = aliceArray[i];
        //     }
        
        //     if(bobArray[i]>=maxbob){
        //         maxbob = bobArray[i];
        //     }
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     if(aliceArray[i] == maxAlice){
        //         aliceArray[i] = 0;
        //     }
        //     if(bobArray[i] == maxbob){
        //         bobArray[i] = 0;
        //     }
        // }
        // int sum1 =0;
        // int sum2 =0;
        // for (int i = 0; i < n; i++)
        // {
        //     sum1 = sum1 + aliceArray[i];
        //     sum2 = sum2 + bobArray[i];
        // }
        if(sum1>sum2){
            cout<<"Bob"<<endl;
        }else if(sum2>sum1){
            cout<<"Alice"<<endl;
        }else{
            cout<<"Draw"<<endl;
        }
        
    
        
        t--;
    }
}
