//
// Created by Aman Krishna on 10/03/23.
//

#ifndef FINAL_RECTANGLE_H
#define FINAL_RECTANGLE_H

#include <utility>
#include "shapes.h"

//Create a class called Rectangle that inherits from Shape

class Rectangle : public Shape {
private:
    double length;
    double width;
    std::pair<double, double> center;

public:
    Rectangle(double length, double width, std::pair<double, double> center) : length(length), width(width), center(std::move(center)) {}
    double area() override;
    double perimeter() override;
    void print() override;
    //getCenter() function
    std::pair<double, double> getCenter() override;
};

#endif //FINAL_RECTANGLE_H
