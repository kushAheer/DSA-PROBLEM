#include <bits/stdc++.h>
using namespace std;

// int sub(int length , int intArray[] ,int i,int initialTime){
    
    
//     if(length-1>0){
//         initialTime = intArray[i+1] - intArray[i] ; 
//         length--;
//         i++;
//         cout<<"Initial Time : "<<initialTime<<endl;
//         sub(length,intArray,i,initialTime);
//     }
//     return 0 ;

// }


int main() {
	// your code goes here
    int t;
    cout<<"Number of Test Cases : ";
    cin>>t;
    while(t>0){
        int n,element;
        
        cout<<"Length of List : ";
        
        cin>>n;
        
        int TotalTime[n];
        int timeTaken[n];
        
        for(int i=0;i<n;i++){
            cout<<"Enter Total Time  : ";
            cin>>element;
            TotalTime[i] = element;
        }

        for(int i=0;i<n;i++){
            cout<<"Time Taken : ";
            cin>>element;
            timeTaken[i] = element;
        }
        // sub(n,TotalTime,0,0);
        int initialTimeLeft = TotalTime[0];
        int timeLeft[n]; 
        
        timeLeft[0] = initialTimeLeft;
        for (int i = 0; i < n-1; i++)
        {
           timeLeft[i+1] = TotalTime[i+1] - TotalTime[i];
        
        }
        for(int item:timeLeft){
            cout<<"Element : "<<item<<endl;
        }
        int count = 0;
        for(int i = 0; i<n;i++){

            if(timeLeft[i]>=timeTaken[i]){
                count++;
            }
        }
        cout<<"result : "<<count<<endl;
        

        t--;
    }
}

