#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin >> t;
	
	while(t--)
	{
	    int N;
        int Product = 1 ; 
        int countNegative = 0;
	    cin >> N;
	    int A[N];
	    for(int i = 0; i < N; i++)
	    {
	        cin >> A[i];
	    }
	    for (int i:A)
        {
            Product = Product*i;
            if(i<0){
                countNegative++;
            }
        }
        
        if(countNegative%2==0 || Product == 0){
            cout<< 0 <<endl;
        }else{
            cout<<1<<endl;
        }
        cout<<"Product : "<<Product<<endl;
	}
}