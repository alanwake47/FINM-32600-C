//
// Created by Aman Krishna on 10/03/23.
//

#include "rectangle.h"
#include <iostream>

double Rectangle::area() {
    return length * width;
}

double Rectangle::perimeter() {
    return 2 * (length + width);
}

void Rectangle::print() {
    std::cout << "Rectangle with length " << length << " and width " << width << " and center (" << center.first << ", " << center.second << ")" << std::endl;
}

std::pair<double, double> Rectangle::getCenter() {
    //return the center of the rectangle as a pair
    return center;
}

