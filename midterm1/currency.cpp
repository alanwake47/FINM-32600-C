//
// Created by Aman Krishna on 28/01/23.
//
#include <iostream>
#include <string>
#include "currency.h"
using namespace std;


Currency::Currency(): symbol_(""),country_("") ,exchange_rate_(0.0)
{
    cout << "Currency constructor called for :" << symbol_ << endl;
}

Currency::Currency(string symbol,string country, double rate): symbol_(symbol),country_(country), exchange_rate_(rate)
{
}

Currency::~Currency()
{
}

string Currency::GetSymbol()
{
    return symbol_;
}

string Currency::GetCountry()
{
    return country_;
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

Currency::Currency(const Currency &obj)
{
    cout << "Copy constructor called" << endl;
    symbol_ = obj.symbol_;
    country_ = obj.country_;
    exchange_rate_ = obj.exchange_rate_;
}

Currency& Currency::operator=(const Currency &obj)
{
    cout << "Assignment operator called" << endl;
    symbol_ = obj.symbol_;
    country_ = obj.country_;
    exchange_rate_ = obj.exchange_rate_;
    return *this;
}