#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin >> t;
	
	while(t--)
	{
	    int N;
        int Product = 0 ; 
        int countNegative = 0;
	    cin >> N;
	    int A[N];
	    for(int i = 0; i < N; i++)
	    {
	        cin >> A[i];
	    }
	    for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if(j!=i){
                    Product = A[j] * A[i];
                }
            }
            if(A[i]<0){
                countNegative++;
            }
        }
        if(Product>=0){
            cout<<0<<endl;
        }else if(countNegative%2 == 0){
            countNegative = 0;
        }else{
            cout<<"Count Negative : "<<countNegative<<endl;
        }
        cout<<"Product : "<<Product<<endl;
	}
}	