#include <iostream>
using namespace std;

template <typename T> T maximum(T a , T b);

int main(){
    int a , b;
    a = 10;
    b = 20;
    double c{34.5}; 
    double d{66.5}; 
    string name = "a";
    string name2= "b";

    cout<< maximum(a,b)<<endl;
    cout<<maximum(c,d)<<endl;
    cout<<maximum(name,name2)<<endl;

    return 0;   
}

template <typename T> T maximum(T a , T b){
    return (a>b)? a: b;
}