//
// Created by Aman Krishna on 26/02/23.
//

#include "europeancall.h"
#include <cmath>
#include <algorithm>
//
////Price function
//double EuropeanCall::Price(double spot, double rate, double vol) const {
//    return spot * cdf(d1(spot, rate, vol)) - strike_ * exp(-rate * expiry_) * cdf(d2(spot, rate, vol));
//}

//Get Option Payoff
double EuropeanCall::GetExpirationPayoff(double spot_T) const {
    return std::max(spot_T - strike_, 0.0);
}

//Delta function
double EuropeanCall::Delta(double spot, double rate, double vol) const {
    return cdf(d1(spot, rate, vol));
}

//Gamma function
double EuropeanCall::Gamma(double spot, double rate, double vol) const {
    return pdf(d1(spot, rate, vol)) / (spot * vol * sqrt(expiry_));
}
