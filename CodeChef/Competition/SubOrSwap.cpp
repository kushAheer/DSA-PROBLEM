#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y ,prevX,prevY;
        cin>>x>>y;
        int flag = 0;
        while(flag == 0){
            
            if(x>y){
                prevX = x;
                x = y;
                y = prevX;
            }else{
                int prev;
                prev = x;
                x = y - x;
                y = prev;
                if(x == 0){
                    cout<<y<<endl;
                    flag = 1;
                }
            }
        }
    }
}
