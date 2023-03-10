//
// Created by Aman Krishna on 26/02/23.
//

#ifndef HW5_PRICER_H
#define HW5_PRICER_H

#include "option.h"
#include "boxmuller.h"

class MCPricer {
public:
    double Price(const Option& option, double spot, double rate, double vol, unsigned long paths) const;
};

#endif //HW5_PRICER_H
