#include <bits/stdc++.h>
using namespace std;

string getStringElement(int arrayData[3]);

int sortArray(int arrayData[3]);



int main() {
	// your code goes here
	int t;
    // cout<<"total number of test case : ";
	cin>>t;
	while(t>0){
	    
	    int aliceArray[3];
	    int bobArray[3];
	    int element1,element2;
	    for(int i = 0;i<3 ;i++){
            if(i<3){
                // cout<<"enter alice element :";
	            cin>>element1;
	            aliceArray[i] = element1;
            }
	    }
        for(int i=0;i<3;i++){
            // cout<<"enter bob element :";
            cin>>element2;
	        bobArray[i] = element2;
        }
        
        aliceArray[3] = sortArray(aliceArray);
        bobArray[3] = sortArray(bobArray);

        string aliceString=getStringElement(aliceArray);
	    string bobString = getStringElement(bobArray);

        
        
        
        

        int aliceScore = stoi(aliceString);
        int bobScore = stoi(bobString);
        
        if(aliceScore > bobScore){
            cout<<"Alice"<<endl;
        }else if (aliceScore == bobScore)
        {
            cout<<"Tie"<<endl;
        }else{
            cout<<"Bob"<<endl;
        }
        
	    t--;
	}

}


string getStringElement(int arrayData[3]){
    string stringNumber;
    
    for(int i = 0;i<3 ;i++){
    
            stringNumber = stringNumber + to_string(arrayData[i])  ;
	        
	}
    return stringNumber;
}
int sortArray(int arrayData[3]){
    for (int i = 0; i < 3; i++)
    {
        if(i == 2){
            break;
        }
        for (int j = 1;j<3;j++)
        {
            if(arrayData[i]<arrayData[j]){
                int temp = arrayData[i]; 
                arrayData[i] = arrayData[j];
                arrayData[j] = temp;
            }
        }
    }
    return arrayData[3];
}