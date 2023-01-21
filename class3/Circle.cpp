//
// Created by Aman Krishna on 20/01/23.
//
#include "Circle.h"

Circle::Circle(int radius)
        :radius_(radius)
{}

double Circle::Area() const
{
    return 3.14 * radius_ * radius_;
        }

        double Circle::Circumference() const
        {
    return 2 * 3.14 * radius_;
}
