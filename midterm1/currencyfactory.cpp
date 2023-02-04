//
// Created by Aman Krishna on 03/02/23.
//

#include "currencyfactory.h"
#include <iostream>
using namespace std;

CurrencyFactory* CurrencyFactory::instance_ = nullptr;

CurrencyFactory::CurrencyFactory()
{
    currencies_[0] = new Currency("USD", "USA", 1.0);
    currencies_[1] = new Currency("EUR", "Eurozone", 0.84);
    currencies_[2] = new Currency("GBP", "UK", 0.72);
    currencies_[3] = new Currency("CAD", "Canada", 1.1);
    currencies_[4] = new Currency("AUD", "Australia", 1.3);
    currencies_[5] = new Currency("JPY", "Japan", 110.0);
    currencies_[6] = new Currency("INR", "India", 73.0);
}

CurrencyFactory::~CurrencyFactory()
{
    for (int i = 0; i < 7; i++)
    {
        delete currencies_[i];
    }
}

CurrencyFactory* CurrencyFactory::GetInstance()
{
    if (instance_ == nullptr)
    {
        instance_ = new CurrencyFactory();
    }
    return instance_;
}

void CurrencyFactory::DestroyInstance()
{
    if (instance_ != nullptr)
    {
        delete instance_;
        instance_ = nullptr;
    }
}

Currency* CurrencyFactory::CreateCurrency(CurrencyType type)
{
    return currencies_[type];
}

void CurrencyFactory::AddCurrency(CurrencyType type, Currency* currency)
{
    currencies_[type] = currency;
}


// Created by Aman Krishna on 03/02/23.