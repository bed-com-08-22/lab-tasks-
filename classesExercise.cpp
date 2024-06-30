#include <iostream>
#include "Rectangle.h"

int main() {
    Rectangle rect;

    float length, width;

    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    rect.setLength(length);

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;
    rect.setWidth(width);

    std::cout << "Area of the rectangle: " << rect.calculateArea() << std::endl;

    return 0;
}
