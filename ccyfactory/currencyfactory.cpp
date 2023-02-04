//
// Created by Aman Krishna on 03/02/23.
//

#include "currencyfactory.h"

//GetCurrency() creates and returns a new currency object:
//Let’s create the currency objects and store them in the array:

CurrencyFactory::CurrencyFactory()
{
    currencies_[0] = new Currency("USD", 1.0);
    currencies_[1] = new Currency("EUR", 0.92);
    currencies_[2] = new Currency("GBP", 0.81);
    currencies_[3] = new Currency("CAD", 1.32);
    currencies_[4] = new Currency("AUD", 1.42);
    currencies_[5] = new Currency("JPY", 110.0);
    currencies_[6] = new Currency("INR", 74.0);
}

CurrencyFactory::~CurrencyFactory()
{
    for (int i = 0; i < 7; i++)
    {
        delete currencies_[i];
    }
}

Currency* CurrencyFactory::GetCurrency(CurrencyType currencytype)
{
    return currencies_[currencytype];
}
