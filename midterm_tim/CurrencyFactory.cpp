#include "CurrencyFactory.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

CurrencyFactory::CurrencyFactory() {
    cout << "CurrencyFactory constructor called" << endl;
    currencies_[0] = nullptr;
    currencies_[1] = nullptr;
    currencies_[2] = nullptr;
}

// ref: C++ Primer 13.1.3
CurrencyFactory::~CurrencyFactory() {
    cout << "CurrencyFactory destructor called" << endl;
}

Currency* CurrencyFactory::GetCurrency(int currencyType) {
    switch (currencyType) {
    case 0:
        if (!currencies_[0]) {
            currencies_[0] = new Currency("USD", "USA", 1.0);
        }
        return currencies_[0];

    case 1:
        if (!currencies_[1]) {
            currencies_[1] = new Currency("CAD", "Canada", 1.1);
        }
        return currencies_[1];
    case 2:
        if (!currencies_[2]) {
            currencies_[2] = new Currency("AUD", "Australia", 1.3);
        }
        return currencies_[2];

    default:
        return nullptr;
    }
}