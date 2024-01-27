#include "CylinderClass.h"


Cylinder::Cylinder(double radiusParam , double heightParam){
    baseRadius = radiusParam;
    height = heightParam;
}
double Cylinder::volume(){
    return PI * baseRadius * height;
}
// Getter Method
double Cylinder::getRadius(){
    return baseRadius;
}
double Cylinder::getHeight(){
    return height;
}
// SETTER METHOD 
void Cylinder::setBaseRadius(double radiusParam){
    baseRadius = radiusParam;
}
void Cylinder::setHeight(double heightParam){
    height = heightParam;
}