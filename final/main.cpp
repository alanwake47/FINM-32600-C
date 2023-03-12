#include "circle.h"
#include "square.h"
#include "rectangle.h"
#include "distancefunc.h"
#include <iostream>

//Geometric Shapes

int main() {
    // Instantiate the circles
    Circle circle1(10, {7, 8});
    Circle circle2(5, {2, 6});
    // Instantiate the squares
    Square square1(10, {3, 12});
    Square square2(5, {10, 2});
    //Instantiate the rectangles
    Rectangle rectangle1(10, 5, {5, 15});
    Rectangle rectangle2(5, 2, {12, 12});

    // Part a) Find the total area of all the shapes and print it
    double totalArea = circle1.area() + circle2.area() + square1.area() + square2.area() + rectangle1.area() + rectangle2.area();
    std::cout << "Part a: Total area of all shapes = " << totalArea << std::endl;

    // Part b) Find the total area of all circles and print it
    double totalCircleArea = circle1.area() + circle2.area();
    std::cout << "Part b: Total area of all circles = " << totalCircleArea << std::endl;

    // Part c) Find the total area of all rectangles and print it
    double totalRectangleArea = rectangle1.area() + rectangle2.area();
    std::cout << "Part c: Total area of all rectangles = " << totalRectangleArea << std::endl;

    // Part d) Find the total perimeter of all the shapes and print it
    double totalPerimeter = circle1.perimeter() + circle2.perimeter() + square1.perimeter() + square2.perimeter() + rectangle1.perimeter() + rectangle2.perimeter();
    std::cout << "Part d: Total perimeter of all shapes = " << totalPerimeter << std::endl;

    // Part e) Find the total perimeter of all circles and print it
    double totalCirclePerimeter = circle1.perimeter() + circle2.perimeter();
    std::cout << "Part e: Total perimeter of all circles = " << totalCirclePerimeter << std::endl;

    // Part f) Find the total perimeter of all squares and print it
    double totalSquarePerimeter = square1.perimeter() + square2.perimeter();
    std::cout << "Part f: Total perimeter of all squares = " << totalSquarePerimeter << std::endl;

    //We will use a function called distance to find the distance between two points
    // Part g) Find the distance between the center of two circles and print it
    double distanceBetweenCircles = distance(circle1.getCenter(), circle2.getCenter());
    std::cout << "Part g: Distance between the centers of the two circles = " << distanceBetweenCircles << std::endl;

    // Part h) Find the distance between the center of two squares and print it
    double distanceBetweenSquares = distance(square1.getCenter(), square2.getCenter());
    std::cout << "Part h: Distance between the centers of the two squares = " << distanceBetweenSquares << std::endl;
}
