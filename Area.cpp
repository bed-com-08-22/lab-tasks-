#include "Area.h"
#include <cmath>

using namespace shape;

float Area::areaOfCircle(Circle &circle){
    return M_PI * circle.getRadius() * circle.getRadius();
}

float Area::areaOfSquare(Square &square){
    return square.getLength() * square.getLength();
}

float Area::areaOfTriangle(Triangle &triangle){
    return 0.5 * triangle.getBase() * triangle.getHeight();
}