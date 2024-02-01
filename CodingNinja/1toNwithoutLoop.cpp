#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
using namespace std;


vector<int> printNos(int x,int count) {
    // Write Your Code Here
    vector<int> integerArray;
    int i =0 ;
    
    if(i<x){
        integerArray.insert(integerArray.begin(),x);
        // for (int i:integerArray)
        // {
        //     cout<<"Index ("<<count<<")"<<i<<endl;

        // }
        
        // cout<<"----"<<endl;
        printNos(x-1,count+1);
    }
    // sort(integerArray.begin(),integerArray.end());

    return integerArray;
}

int main(){
    vector<int> intArray = printNos(5,0);
    // int count = INT_M
    // for (int i:intArray)
    // {
    //     cout<<"Index ("<<count<<")"<<i<<endl;
    //     count++;
    // }
    
    
    return 0 ;
}