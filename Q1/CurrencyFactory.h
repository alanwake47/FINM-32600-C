//
// Created by Christian Pavilanis on 2023-02-03.
//

#ifndef Q1_CURRENCYFACTORY_H
#define Q1_CURRENCYFACTORY_H

#include "Currency.h"

class CurrencyFactory {
private:
    Currency* currencies_[3];

public:
    CurrencyFactory();
    ~CurrencyFactory();
    Currency* GetCurrency(int currencyType);
};

#endif //Q1_CURRENCYFACTORY_H
