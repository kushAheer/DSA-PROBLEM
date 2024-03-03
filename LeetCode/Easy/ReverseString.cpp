#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector<char> s = {'h','e','l','l','o'};
    int count = 0;
    for(int i = s.size()-1 ; i>count ; i--){
        
        int prev = s[count];
        s[count] = s[i];
        s[i] = prev;
        count++;
    
            
    }
    return 0;
}