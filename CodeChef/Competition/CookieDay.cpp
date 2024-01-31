#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
    while(t>0){
        
        int numberOfJar,numberOfChildren;
        
        cin>>numberOfJar>>numberOfChildren;
        
        int numberOfCookiesInJar[numberOfJar];

        int cookies;
        for(int i = 0; i<numberOfJar ; i++){
            
            cin>>cookies;
            numberOfCookiesInJar[i] = cookies;
            cout<<"Cookies in Jar : "<<numberOfCookiesInJar[i]<<endl;    
        }
        int flag = 0;
        int prevNumber;
        for(int i:numberOfCookiesInJar){
            if(i>=numberOfChildren){
                prevNumber = i%numberOfChildren;
                flag = 1;
                
            }

        }
        if(flag=0){
            cout<<-1;
        }
        t--;
    }

}
