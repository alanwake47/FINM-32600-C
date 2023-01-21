#include <iostream>
using namespace std;
#include "Circle.h"

int main() {
    Circle c(7);

    cout << c.Area() << endl;
    cout << c.Circumference() << endl;
}
