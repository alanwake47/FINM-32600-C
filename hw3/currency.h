#ifndef CURRENCY_HPP
#define CURRENCY_HPP

#include <string>
using std::string;

class Currency {
public:
    Currency(const string& symbol, double exchange_rate);
    double ConvertTo(double amount, const Currency& to) const;
    double GetExchangeRate() const;
    string GetSymbol() const;
    ~Currency();

private:
    string symbol_;
    double exchange_rate_;
};

#endif