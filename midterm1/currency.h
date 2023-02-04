//
// Created by Aman Krishna on 28/01/23.
//

#ifndef HW2_CURRENCY_H
#define HW2_CURRENCY_H
#include <string>
using namespace std;

enum CurrencyType
{
    USD=0,
    EUR,
    GBP,
    CAD,
    AUD,
    JPY,
    INR
};

class Currency
{
private:
    string symbol_;
    string country_;
    double exchange_rate_;
public:
    Currency();
    Currency(string symbol, string country,double rate);

    ~Currency();


    string GetSymbol();
    string GetCountry();
    double GetExchangeRate();
    void SetExchangeRate(double rate);
    double ConvertFromUSD(double value) const;
    double ConvertToUSD(double value) const;

    //write a copy constructor
    Currency(const Currency &obj);
    //write an assignment operator
    Currency& operator=(const Currency &obj);

};

#endif //HW2_CURRENCY_H