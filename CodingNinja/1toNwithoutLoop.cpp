#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
using namespace std;
void printNumber(int x,vector<int> &arr ,int i){
    if(i<x){
        arr.push_back(i);
        i++;
        printNumber(x,arr,i);
    }else{
        arr.push_back(i);
    }
    
    return;
}

vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> integerArray;
    int i = 1;
    printNumber(x,integerArray,i);
    

    return integerArray;
}

int main(){
    vector<int> intArray = printNos(5);
    int count = 0;
    
    for(int i:intArray)
    {
        cout<<"Index ("<<count<<")"<<i<<endl;
        count++;
    }
    return 0 ;
}