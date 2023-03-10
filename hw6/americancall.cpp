//
// Created by Aman Krishna on 09/03/23.
//

#include "americancall.h"
#include <cmath>
#include <algorithm>


//Get Option Payoff
double AmericanCall::GetExpirationPayoff(double spot_T) const {
    return std::max(spot_T - strike_, 0.0);
}

//Get Intermediate Payoff

double AmericanCall::GetIntermediatePayoff(double spot_T, double discexpectedpayoff) const {
    return std::max(spot_T - strike_, discexpectedpayoff);
}

//Delta function
double AmericanCall::Delta(double spot, double rate, double vol) const {
    return cdf(d1(spot, rate, vol));
}

//Gamma function
double AmericanCall::Gamma(double spot, double rate, double vol) const {
    return pdf(d1(spot, rate, vol)) / (spot * vol * sqrt(expiry_));
}

