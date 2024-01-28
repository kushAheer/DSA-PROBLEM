#include <iostream>
using namespace std;

class Dog{
    string mName;
};

struct Cat{
    string mName;
};


int main(){
    Dog dog1;
    Cat cat1;

    // dog1.mName = "Fluffy"; //Compiler Error

    cat1.mName = "Juny";

    cout<< sizeof(string) <<endl;
    return 0 ;
}
