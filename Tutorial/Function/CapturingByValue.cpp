#include <iostream>
using namespace std;

int main(){
    // int a = 10;
    // int b = 20;
    // auto func = [a,b](){
    //     cout<<a+b<<endl;
    // };
    // int c = 30;
    // auto func = [c](){
    //     cout << "Inner Value : "<<c<<endl;
    // };
    int c = 30;
    auto func = [c](){
        cout << "Inner Value : "<<c<<endl;
    };
    for (size_t i = 0; i <5; i++)
    {
        cout<<"Outer Value : "<<c<<endl;
        func();
        c++;
    }

    return 0;
}