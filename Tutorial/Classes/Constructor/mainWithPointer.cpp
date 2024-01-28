#include <iostream>
#include "CylinderClass.h"

using namespace std;

int main(){

    Cylinder Cylinder1(1.5,2.5);
    Cylinder1.volume();

    //managing  a stack object through pointers
    Cylinder *pCylinder1 = &Cylinder1;

    cout<<"Volume : "<<(*pCylinder1).volume()<<endl;

    //Create a cylinder heap object through the new operator

    Cylinder *pCylinder2 = new Cylinder(100,2);

    cout<< "Volume(Cylinder2) : "<<pCylinder2->volume()<<endl;
    cout<< "BaseRadius(Cylinder2) : "<<pCylinder2->getRadius()<<endl;


    delete pCylinder2;
    return 0;
}
