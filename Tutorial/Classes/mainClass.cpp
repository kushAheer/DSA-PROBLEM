#include <iostream>
#include "CylinderClass.h"

using namespace std;

int main(){
    Cylinder Cylinder1; //Class Object 
    Cylinder1.setBaseRadius(509);
    
    cout<<"Volume : "<< Cylinder1.volume()<<endl;

    return 0;
} 