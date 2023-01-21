//
// Created by Aman Krishna on 20/01/23.
//

class Circle
{
public:
    explicit Circle(int radius);

    double Area() const;
    double Circumference() const;

private:
    int radius_;
    int centerx_{};
    int centery_{};
};
