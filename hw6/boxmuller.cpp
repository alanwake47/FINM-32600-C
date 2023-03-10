//
// Created by Aman Krishna on 26/02/23.
//

#include "boxmuller.h"

#include <cmath>
#include <cstdlib>

using namespace std;

//Box-Muller algorithm to generate standard normal random variable
double BoxMuller() {
    double z = INFINITY;
    //Create a loop to make sure z is not infinite
    while (z == INFINITY) {
        double x = rand() / (double)RAND_MAX;
        double y = rand() / (double)RAND_MAX;
        z = sqrt(-2.0 * log(x)) * cos(2.0 * M_PI * y);
    }
    return z;
}
