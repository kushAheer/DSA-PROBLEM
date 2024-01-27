#include <iostream>
using namespace std;
int main(){
    // = in capture list sign represent capture everything by value 
    // int c = 30;
    // auto func = [=](){
    //     cout << "Inner Value : "<<c<<endl;
    // };


    //&  in capture list represent capture everything by refernce

    int c = 30;
    auto func = [&](){
        cout << "Inner Value : "<<c<<endl;
    };
    for (size_t i = 0; i <5; i++)
    {
        cout<<"Outer Value : "<<c<<endl;
        func();
        c++;
    }
    return 0 ;
}