//
// Created by Aman Krishna on 24/02/23.
//

#include "europeanput.h"
#include <cmath>

//Price function
double EuropeanPut::Price(double spot, double rate, double vol) const {
    return strike_ * exp(-rate * expiry_) * cdf(-d2(spot, rate, vol)) - spot * cdf(-d1(spot, rate, vol));
}

//Delta function
double EuropeanPut::Delta(double spot, double rate, double vol) const {
    return -cdf(-d1(spot, rate, vol));
}

//Gamma function
double EuropeanPut::Gamma(double spot, double rate, double vol) const {
    return pdf(d1(spot, rate, vol)) / (spot * vol * sqrt(expiry_));
}