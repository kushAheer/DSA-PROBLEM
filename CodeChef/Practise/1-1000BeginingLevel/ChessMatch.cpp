#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int n,a,b;
	    cin>>n>>a>>b;
	    int add = 180+n;
        cout<<"Add : "<<add<<endl;
	    int totalTime = 2*add;
        cout<<"Total Time : "<<totalTime<<endl;
	    int totalTimeLeft = a + b;
        cout<<"Total Time Left : "<<totalTimeLeft<<endl;
	    int durationOfGame = totalTime - totalTimeLeft;
        cout<<"duration : "<<durationOfGame<<endl;
	    cout<<durationOfGame<<endl;
	    t--;
	}

}
