//
// Created by Aman Krishna on 26/02/23.
//

#include "pricer.h"
#include "boxmuller.h"

#include <cmath>
#include <iostream>

//Price function
double MCPricer::Price(const Option& option, double spot, double rate, double vol, unsigned long paths) const {
    double T = option.GetExpiry();

    double sum = 0.0;

    for (unsigned int i = 0; i < paths; ++i) {
        double z = BoxMuller();
        double spot_T = spot * exp((rate - 0.5 * vol * vol) * T + vol * sqrt(T) * z);
        double payoff = option.GetExpirationPayoff(spot_T);
        double discounted_payoff = payoff * exp(-rate * T);
        sum += discounted_payoff;
    }
    return sum / static_cast<double>(paths);
}


