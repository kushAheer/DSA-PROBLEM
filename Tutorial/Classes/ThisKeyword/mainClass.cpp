#include <iostream>
#include "ThisDog.h"

using namespace std;

int main(){
    Dog dog1("Fluffy","Shepherd",2);
    
    dog1.setDogName("Tiger")->setDogBreed("PUG")->setDogAge(7);
    
    dog1.printInfo();

    cout<<"Done"<<endl;

    //CODECHEF QUESTION
    
    // int t ;
    // cout<<"Total Number of Loop : ";
    // cin>>t;
    // for(int i = 0; i<t ;i++){
    //     int L,P;
    //     cout<<"Enter Value of P : ";
    //     cin>>P;
    //     cout<<"Enter Value of L : ";
    //     cin>>L;
    //     double totalPercentage = (double)L/P*100;
    //     cout<<"Total Percentage: "<<totalPercentage<<endl;
        
    //     if(totalPercentage>=75){
    //         cout<<"YES"<<endl;
    //     }else{
    //         cout<<"NO"<<endl;
    //     }
    // }
    
    return 0 ;
}