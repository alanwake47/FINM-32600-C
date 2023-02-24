//
// Created by Aman Krishna on 24/02/23.
//

#include "option.h"
#include <cmath>

//Constructor
Option::Option(double strike, double expiry) : strike_(strike), expiry_(expiry) {}

//d1
double Option::d1(double spot, double rate, double vol) const {
    return (log(spot / strike_) + (rate + 0.5 * pow(vol, 2)) * expiry_) / (vol * sqrt(expiry_));
}

//d2
double Option::d2(double spot, double rate, double vol) const {
    return d1(spot, rate, vol) - vol * sqrt(expiry_);
}

//Gamma function
double Option::Gamma(double spot, double rate, double vol) const {
    return pdf(d1(spot, rate, vol)) / (spot * vol * sqrt(expiry_));
}

//Normal CDF
double Option::cdf(double x) {
    return 0.5 * erfc(-x * M_SQRT1_2);
}

//Normal PDF
double Option::pdf(double x) {
    return exp(-0.5 * pow(x, 2)) / sqrt(2 * M_PI);
}


