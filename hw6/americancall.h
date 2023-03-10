//
// Created by Aman Krishna on 09/03/23.
//

#ifndef HW5_AMERICANCALL_H
#define HW5_AMERICANCALL_H

#include "option.h"

//Create an American Call class
class AmericanCall : public Option {
public:
    //Constructor
    AmericanCall(double strike, double expiry) : Option(strike, expiry) {}

    //Get Option Payoff
    double GetExpirationPayoff(double spot_T) const override;

    //Get Intermediate Payoff
    double GetIntermediatePayoff(double spot_T, double discexpectedpayoff) const override;

    //Delta function
    double Delta(double spot, double rate, double vol) const override;

    //Gamma function
    double Gamma(double spot, double rate, double vol) const override;
};

#endif //HW5_AMERICANCALL_H
