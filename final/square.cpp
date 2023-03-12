//
// Created by Aman Krishna on 10/03/23.
//

#include "square.h"
#include <iostream>

double Square::area() {
    return side * side;
}

double Square::perimeter() {
    return 4 * side;
}

void Square::print() {
    std::cout << "Square with side " << side << " and center (" << center.first << ", " << center.second << ")" << std::endl;
}

std::pair<double, double> Square::getCenter() {
    //return the center of the square as a pair
    return center;
}

