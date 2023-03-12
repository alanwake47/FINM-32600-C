//
// Created by Aman Krishna on 10/03/23.
//

#ifndef FINAL_SHAPES_H
#define FINAL_SHAPES_H

#include <utility>
#include <cmath>

//Create a Base class called Shape

class Shape {
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
    virtual void print() = 0;
    virtual std::pair<double, double> getCenter() = 0;
};

#endif //FINAL_SHAPES_H
