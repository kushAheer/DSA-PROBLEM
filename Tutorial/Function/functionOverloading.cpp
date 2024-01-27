#include <iostream>
using namespace std ;

int max(int a , int b){
    cout<<"Integer OverLoad"<<endl;
    return (a>b)? a: b;
}
double max(double a , double b){
    cout<<"Decimal OverLoad"<<endl;
    return (a>b)? a: b;
}
int main(){ 
    cout<<max(4,3)<<endl;
    cout<<max(4.78,3.909)<<endl;
    return 0 ;
}