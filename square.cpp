#include "Square.h"

using namespace shape;

    Square::Square(){
        side = 0.0;
    }

    Square::Square(float length){
        side = length;
    }

    Square::~Square(){

    }

void Square::setLength(float length){
    side = length;
}

float Square::getLength(){
    return side;
}