#include "Circle.h"

using namespace shape;

Circle::Circle(){
    Circle::radius = 0.0;
}

Circle::Circle(float radius){
    Circle::radius = radius;
}

Circle::~Circle(){

}

void Circle::setRadius(float radius){
    Circle::radius = radius;
}

float Circle::getRadius(){
    return radius;
}