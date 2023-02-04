//
// Created by Aman Krishna on 03/02/23.
//

#ifndef CCYFACTORY_CURRENCYFACTORY_H
#define CCYFACTORY_CURRENCYFACTORY_H

#include "currency.h"
#include "converter.h"
//relocate Currency object creation to a class (CurrencyFactory)
//Use a CurrentyFactory object to create Currency objects

class CurrencyFactory
{
public:
    CurrencyFactory();
    ~CurrencyFactory();
    Currency* GetCurrency(CurrencyType currencytype);

private:
    //We create an array of currencies using the default constructor
    //We can then use the array to create new Currency objects
    Currency* currencies_[7];

};

#endif //CCYFACTORY_CURRENCYFACTORY_H
