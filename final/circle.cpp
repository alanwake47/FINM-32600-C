//
// Created by Aman Krishna on 10/03/23.
//

#include "circle.h"
#include <cmath>
#include <iostream>

double Circle::area() {
    return M_PI * pow(radius, 2);
}

double Circle::perimeter() {
    return 2 * M_PI * radius;
}

void Circle::print() {
    std::cout << "Circle with radius " << radius << " and center (" << center.first << ", " << center.second << ")" << std::endl;
}

std::pair<double, double> Circle::getCenter() {
    //return the center of the circle as a pair
    return center;
}
