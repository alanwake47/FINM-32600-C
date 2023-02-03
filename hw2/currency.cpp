//
// Created by Aman Krishna on 28/01/23.
//

#include "currency.h"
using std::string;

Currency::Currency(): symbol_(""), exchange_rate_(0.0)
{
}

Currency::Currency(string symbol, double rate): symbol_(symbol), exchange_rate_(rate)
{
}

Currency::~Currency()
{
}

string Currency::GetSymbol()
{
    return symbol_;
}

double Currency::GetExchangeRate()
{
    return exchange_rate_;
}

void Currency::SetExchangeRate(double exchange_rate)
{
    exchange_rate_ = exchange_rate;
}

double Currency::ConvertFromUSD(double amount) const
 {
     return amount * exchange_rate_;
 }

 double Currency::ConvertToUSD(double amount) const
 {
     return amount * 1/exchange_rate_;
 }