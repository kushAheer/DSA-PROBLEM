// Update the code below to solve the problem

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() 
{
	int t;
    cin >> t;
	
	while(t--)
	{
	    int t1, t2, r1, r2;
	    cin >> t1 >> t2 >> r1 >> r2;
	    double one = pow(t1,2);
	    double two = pow(t2,2);
	    double three = pow(r1,3);
	    double four = pow(r2,3);
        double div1 = one/three;
        double div2 = two/four;
	    if(div1 == div2){
	        cout<<"yes"<<endl;
	    }else{
	        cout<<"no"<<endl;
	    }
	 
	}
    return 0;
}	