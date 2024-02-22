#include <iostream>
#include <vector>
using namespace std;

void appendNumber(vector<int> &arr , int n , int sum , int i){
    
    if(n>i){
        
        i++;
        appendNumber(arr,n,sum,i);
    }
}

vector<int> generateFibonacciNumbers(int n) {
    
    // Write your code here.
    vector<int> arrayNumber = {0,1};

    appendNumber(arrayNumber,n,0,0);

    return arrayNumber;
}

int main(){
    generateFibonacciNumbers(5);

}