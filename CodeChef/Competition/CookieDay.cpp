#include <bits/stdc++.h>
using namespace std;
// #define int long long int;

int main() {
	// your code goes here
	int t;
    cin>>t;
    while(t>0){
        
        int numberOfJar,numberOfChildren;
        
        cin>>numberOfJar>>numberOfChildren;
        
        int numberOfCookiesInJar[numberOfJar];

        int cookies;
        int minCookie = INT_MAX;
        for(int i = 0; i<numberOfJar ; i++){
            
            cin>>cookies;
            numberOfCookiesInJar[i] = cookies;
            
        
        }
        for (int i = 0; i <numberOfJar; i++)
        {
            if(numberOfCookiesInJar[i] >= numberOfChildren) {
                int waste = numberOfCookiesInJar[i]%numberOfChildren;
                minCookie = min(minCookie,waste);
            }
        }
        if (minCookie !=INT_MAX){
            cout<<minCookie<<endl;
            
        }else{
            cout<<-1<<endl;
        }
        
        
       
        
        
        t--;
    }

}
