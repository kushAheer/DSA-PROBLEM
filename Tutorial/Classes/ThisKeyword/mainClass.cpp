#include <iostream>
#include "ThisDog.h"

using namespace std;

int main(){
    Dog dog1("Fluffy","Shepherd",2);
    
    dog1.setDogName("Tiger")->setDogBreed("PUG")->setDogAge(7);
    
    dog1.printInfo();

    cout<<"Done"<<endl;
    return 0 ;
}