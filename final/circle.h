//
// Created by Aman Krishna on 10/03/23.
//

#ifndef FINAL_CIRCLE_H
#define FINAL_CIRCLE_H

#include <utility>
#include "shapes.h"


//Create a class called Circle that inherits from Shape

class Circle : public Shape {
private:
    double radius;
    std::pair<double, double> center;

public:
    Circle(double radius, std::pair<double, double> center) : radius(radius), center(std::move(center)) {}
    double area() override;
    double perimeter() override;
    void print() override;
    //getCenter() function
    std::pair<double, double> getCenter() override;
};

#endif //FINAL_CIRCLE_H
