#include "currency.h"
#include <iostream>
using std::string;

Currency::Currency(const string& symbol, double exchange_rate)
        : symbol_(symbol), exchange_rate_(exchange_rate)
{
}

double Currency::ConvertTo(double amount, const Currency& to_currency) const
{
    return amount * (exchange_rate_ / to_currency.exchange_rate_);
}

double Currency::GetExchangeRate() const
{
    return exchange_rate_;
}

string Currency::GetSymbol() const
{
    return symbol_;
}

Currency::~Currency()
{
    std::cout << "Currency destructor called for " << symbol_ << std::endl;
}


