//
// Created by Aman Krishna on 24/02/23.
//

#ifndef HW4_EUROPEANCALL_H
#define HW4_EUROPEANCALL_H

#include "option.h"

//European Call class
class EuropeanCall : public Option {
public:
    //Constructor
    EuropeanCall(double strike, double expiry) : Option(strike, expiry) {}

    //Price function
    double Price(double spot, double rate, double vol) const override;

    //Delta function
    double Delta(double spot, double rate, double vol) const override;

    //Gamma function
    double Gamma(double spot, double rate, double vol) const override;
};

#endif //HW4_EUROPEANCALL_H
