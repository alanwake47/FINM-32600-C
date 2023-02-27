//
// Created by Aman Krishna on 26/02/23.
//

#include "europeanput.h"
#include <cmath>
#include <algorithm>
////Price function
//double EuropeanPut::Price(double spot, double rate, double vol) const {
//    return strike_ * exp(-rate * expiry_) * cdf(-d2(spot, rate, vol)) - spot * cdf(-d1(spot, rate, vol));
//}

//Get Option Payoff
double EuropeanPut::GetExpirationPayoff(double spot_T) const {
    return std::max(strike_ - spot_T, 0.0);
}

//Delta function
double EuropeanPut::Delta(double spot, double rate, double vol) const {
    return -cdf(-d1(spot, rate, vol));
}

//Gamma function
double EuropeanPut::Gamma(double spot, double rate, double vol) const {
    return pdf(d1(spot, rate, vol)) / (spot * vol * sqrt(expiry_));
}