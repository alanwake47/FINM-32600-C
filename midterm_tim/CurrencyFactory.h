#ifndef CURRENCYFACTORY_H
#define CURRENCYFACTORY_H
#include "Currency.h"

class CurrencyFactory {
public:
    CurrencyFactory();
    // ref: C++ Primer 13.1.3
    ~CurrencyFactory();
    Currency* GetCurrency(int currencyType);
private:
    Currency* currencies_[3];
};

#endif