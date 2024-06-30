#pragma once

#include "Triangle.h"
#include "Square.h"
#include "Circle.h"

using namespace shape;

class Area{
    public:
    
    //calculate the area of a square
    static float areaOfSquare(Square &square);

    //calculate the area of a triangle
    static float areaOfTriangle(Triangle &triangle);

    //calculate the area of a circle
    static float areaOfCircle(Circle &circle);
};