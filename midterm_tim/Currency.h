#ifndef CURRENCY_H
#define CURRENCY_H
#include <string>
using std::string;

class Currency {
public:
    // Constructors
    Currency(string symbol, string country, double rate); 
    Currency(const Currency& other); 
    Currency& operator = (const Currency& other);
    // Getters / Setters
    double GetExchangeRate();
    void SetExchangeRate(double rate);
    string GetSymbol();
    void SetSymbol(string symbol);
    string GetCountry();
    void SetCountry(string country);
private:
    string symbol_;
    string country_;
    double exchange_rate_;
};

#endif
