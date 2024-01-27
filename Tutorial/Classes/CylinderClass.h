#include <iostream>
#include "Constants.h"


class Cylinder{
    //Member Variable
    private :
        double baseRadius = 0;
        double height = 0;
    //Property
    public :
        Cylinder(){
            baseRadius = 2.0;
            height = 2.0;
        }
        //HEADER FUNCTION OF CYLINDER WHICH IS IN CPP FILE 
        Cylinder(double radiusParam , double heightParam);
        double volume();
        double getRadius();
        double getHeight();
        void setBaseRadius(double radiusParam);
        void setHeight(double heightParam);
};

