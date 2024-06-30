#include "Rectangle.h"


Rectangle::Rectangle(){
    Rectangle::length = 0;
    Rectangle::width = 0;
};

Rectangle::Rectangle(float length, float width){
    Rectangle::length = length;
    Rectangle::width = width;
}

Rectangle::~Rectangle(){

};

void Rectangle::setLength(float length){
    Rectangle::length = length;
};

void Rectangle::setWidth(float width){
    Rectangle::width = width;
};

float Rectangle::getLenght(){
    return Rectangle::length;
};

float Rectangle::getWidth(){
    return Rectangle::width;
};

float Rectangle::getArea(){
    return Rectangle::length * Rectangle::width;
};