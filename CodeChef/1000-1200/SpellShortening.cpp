#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;

    cout<<"Number of Test Cases :  ";
	cin>>t;
	while(0<t){
	    int n;
        cout<<"Length of list : ";
	    cin>>n;
	    char stringArray[n];
	    char element;
	    for(int i = 0 ; i<n;i++){
            cout<<"Number of Element :  ";
	        cin>>element;
	        stringArray[i] = element; 
	    
	    }
        stringArray[n+1] = '\0';
        cout<<"LIST : "<<stringArray<<endl;
        char result;
    
         t--;
	}

}
