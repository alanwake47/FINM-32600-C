//
// Created by Aman Krishna on 24/02/23.
//

#include "europeancall.h"
#include <cmath>

//Price function
double EuropeanCall::Price(double spot, double rate, double vol) const {
    return spot * cdf(d1(spot, rate, vol)) - strike_ * exp(-rate * expiry_) * cdf(d2(spot, rate, vol));
}

//Delta function
double EuropeanCall::Delta(double spot, double rate, double vol) const {
    return cdf(d1(spot, rate, vol));
}

//Gamma function
double EuropeanCall::Gamma(double spot, double rate, double vol) const {
    return pdf(d1(spot, rate, vol)) / (spot * vol * sqrt(expiry_));
}


