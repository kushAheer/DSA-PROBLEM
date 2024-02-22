#include <iostream>
#include <vector>
using namespace std;
void reverseArray(vector<int> &arr , int m){
    // Write your code here       	
    m = m + 1;
    for(int i = arr.size() -1 ; m<i ; i--){
        int temp = arr[m];
        arr[m] = arr[i];
        arr[i] = temp;
        m++;
    }
    for(int i : arr){
        cout<<i<<endl;
    }
}

int main(){
    vector <int> arr = {1,2,3,4,5,6};
    reverseArray(arr,3);
    
}