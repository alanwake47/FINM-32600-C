//
// Created by Aman Krishna on 03/02/23.
//

#ifndef CCYFACTORY_CURRENCYFACTORY_H
#define CCYFACTORY_CURRENCYFACTORY_H

#include "currency.h"

//create a CurrencyFactory class which uses free-store Currency objects
// Use  lazy initialization such that the Currency objects are created only when they are needed

class CurrencyFactory
{
private:
    static CurrencyFactory* instance_;
    Currency* currencies_[7];
    CurrencyFactory();
    ~CurrencyFactory();
public:
    static CurrencyFactory* GetInstance();
    static void DestroyInstance();
    Currency* CreateCurrency(CurrencyType type);
    void AddCurrency(CurrencyType type, Currency* currency);
};

#endif //CCYFACTORY_CURRENCYFACTORY_H