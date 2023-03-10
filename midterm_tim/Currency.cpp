#include "Currency.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;


// Normal constructor
Currency::Currency(string symbol, string country, double rate) : symbol_(symbol), country_(country), exchange_rate_(rate) {
    cout << "Currency constructor called" << endl;
}
// Copy constructor
Currency::Currency(const Currency& other) : symbol_(other.symbol_), country_(other.country_), exchange_rate_(other.exchange_rate_) {
    cout << "Currency copy constructor called" << endl;
}
// Assignment operator ref: L3, s61
Currency& Currency::operator = (const Currency& other) {
    if (this != &other)
    {
        symbol_ = other.symbol_;
        country_ = other.country_;
        exchange_rate_ = other.exchange_rate_;
    }
    cout << "Currency assignment operator called" << endl;
    return *this;
}

double Currency::GetExchangeRate() {
    return exchange_rate_;
}
void Currency::SetExchangeRate(double rate) {
    exchange_rate_ = rate;
}
string Currency::GetSymbol() {
    return symbol_;
}
void Currency::SetSymbol(string symbol) {
    symbol_ = symbol;
}
string Currency::GetCountry() {
    return country_;
}
void Currency::SetCountry(string country) {
    country_ = country;
}