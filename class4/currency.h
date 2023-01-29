//
// Created by Aman Krishna on 27/01/23.
//

#ifndef CLASS4_CURRENCY_H
#define CLASS4_CURRENCY_H


class Currency
        {
public:
    Currency(string symbol, double rate);
    double GetExchangeRate();
    void SetExchangeRate(double rate);
    double ConvertFromUSD(double value);
    double ConvertToUSD(double value);
private:string symbol_;
    double exchange_rate_;
};


#endif //CLASS4_CURRENCY_H
