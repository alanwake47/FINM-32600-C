//
// Created by Aman Krishna on 10/03/23.
//

#ifndef FINAL_SQUARE_H
#define FINAL_SQUARE_H

#include <utility>
#include "shapes.h"

//Create a class called Square that inherits from Shape

class Square : public Shape {
private:
    double side;
    std::pair<double, double> center;

public:
    Square(double side, std::pair<double, double> center) : side(side), center(std::move(center)) {}
    double area() override;
    double perimeter() override;
    void print() override;
    std::pair<double, double> getCenter() override;
};

#endif //FINAL_SQUARE_H
