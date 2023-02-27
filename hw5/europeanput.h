//
// Created by Aman Krishna on 26/02/23.
//

#ifndef HW5_EUROPEANPUT_H
#define HW5_EUROPEANPUT_H

#include "option.h"

//European Put class
class EuropeanPut : public Option {
public:
    //Constructor
    EuropeanPut(double strike, double expiry) : Option(strike, expiry) {}

    //Price function
    //double Price(double spot, double rate, double vol) const override;

    //Get Option Payoff
    double GetExpirationPayoff(double spot_T) const override;

    //Delta function
    double Delta(double spot, double rate, double vol) const override;

    //Gamma function
    double Gamma(double spot, double rate, double vol) const override;
};
#endif //HW5_EUROPEANPUT_H
