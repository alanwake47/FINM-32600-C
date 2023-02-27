//
// Created by Aman Krishna on 26/02/23.
//

#include "boxmuller.h"

#include <cmath>
#include <cstdlib>

using namespace std;

//Box-Muller algorithm to generate standard normal random variables between 0 and 1
double BoxMuller() {
    double x = rand() / (double)RAND_MAX;
    double y = rand() / (double)RAND_MAX;
    if (x == 0) {
        BoxMuller();
    }
    double z = sqrt(-2.0 * log(x)) * cos(2.0 * M_PI * y);
    return z;
}
