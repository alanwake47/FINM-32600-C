//
// Created by Aman Krishna on 10/03/23.
//

#include "distancefunc.h"

double distance(std::pair<double, double> p1, std::pair<double, double> p2) {
    return sqrt(pow(p1.first - p2.first, 2) + pow(p1.second - p2.second, 2));
}
