#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin >> t;
	
	while(t--)
	{
	    int A[10];
        int score1 = 0;
        int score2 = 0;
	    for(int i = 0; i < 10; i++)
	    {
	        cin >> A[i];
	    }
        for(int i = 0;i<10;i++){
            if(i%2==0){
                if(A[i] == 1){
                    score1 = score1 + 1;
                }
            }else{
                if(A[i] == 1){
                    score2 = score2 + 1;
                }
            }
        }
        if(score1>score2){
            cout<<"First Team Win : "<<1<<endl;
        }else if(score2>score1){
            cout<<"Second Team Win : "<<2<<endl;
        }else{
            cout<<"DRAW : "<<0<<endl;
        }
    }
}
