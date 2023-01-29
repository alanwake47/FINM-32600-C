//
// Created by Aman Krishna on 28/01/23.
//

#ifndef HW2_CURRENCY_H
#define HW2_CURRENCY_H
#include <string>
using std::string;

class Currency
{
private:
    string symbol_;
    double exchange_rate_;
public:
    Currency();
    Currency(string symbol, double rate);

    ~Currency();


    string GetSymbol();
    double GetExchangeRate();
    void SetExchangeRate(double rate);
    double ConvertFromUSD(double value);
    double ConvertToUSD(double value);

};

#endif //HW2_CURRENCY_H