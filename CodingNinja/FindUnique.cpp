#include <iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    //Write your code here
    int uniqueElement = arr[size-1];
    int flag = 0;
    for(int i = 0 ; i < size-1 ; i ++){
        for(int j = 0 ; j < size ; j++){
            if(i!=j){

                if(arr[i] == arr[j]){
                    flag = 0;
                    break;
                }else{
                    flag = 1;
                }
            }
        }
        if(flag == 1){
            uniqueElement = arr[i];
            return  uniqueElement;
            
        }
    }
}

int main(){
    int arr[3] = {1,1,5};
    cout<<findUnique(arr,3);
    
}



