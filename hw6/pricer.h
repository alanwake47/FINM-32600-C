//
// Created by Aman Krishna on 26/02/23.
//

#ifndef HW5_PRICER_H
#define HW5_PRICER_H

#include "option.h"
#include "boxmuller.h"
#include <vector>
using namespace std;

class MCPricer {
public:
    double Price(const Option& option, double spot, double rate, double vol, unsigned long paths) const;
};

struct BinomialNode {
    double spot;
    double payoff;
};

class JRBinomialTree {
public:
    JRBinomialTree(double spot, double rate, double vol,double expiry, unsigned long steps);
    double Price(const Option& option) const;
private:
    using Tree = vector<vector<BinomialNode>>;

    Tree tree_;
};

#endif //HW5_PRICER_H
