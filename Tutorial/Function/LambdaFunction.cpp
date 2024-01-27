#include <iostream>
using namespace std;

int main(){
    // auto func = [](){
    //     cout << "Hello World";
    // };
    // func();
    // [](){
    //     cout<<"Hello World"<<endl;
    // }();
    auto result  = [](int a , int b) ->int{
        return (a+b);
    };
    cout<<result(3,2);
    return 0 ;
}