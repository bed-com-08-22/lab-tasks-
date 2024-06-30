#include "Triangle.h"

using namespace shape;

Triangle::Triangle(){
    base = 0.0;
    height = 0.0;
}

Triangle::Triangle(float base, float height){
    Triangle::base = base;
    Triangle::height = height;
}

Triangle::~Triangle(){

}

void Triangle::setBase(float base){
    Triangle::base = base;
}

void Triangle::setHeight(float height){
    Triangle::height = height;
}

float Triangle::getBase(){
    return base;
}

float Triangle::getHeight(){
    return height;
}
