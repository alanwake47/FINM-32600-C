//
// Created by Christian Pavilanis on 2023-02-03.
//

#ifndef Q2_CURRENCY_H
#define Q2_CURRENCY_H

#include <string>

class Currency{
public:
    Currency(const std::string& symbol, const std::string& country, double exchange_rate);
    Currency(const Currency &other);
    Currency& operator=(const Currency &other);

    Currency() : symbol_(""), country_(""), exchange_rate_(0) {}

    std::string GetSymbol() const;
    std::string GetCountry() const;
    double GetExchangeRate() const;
    void SetExchangeRate(double rate);

private:
    std::string symbol_;
    std::string country_;
    double exchange_rate_;
};

#endif //Q2_CURRENCY_H
