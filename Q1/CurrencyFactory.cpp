//
// Created by Christian Pavilanis on 2023-02-03.
//

#include "CurrencyFactory.h"

CurrencyFactory::CurrencyFactory() {
    currencies_[0] = nullptr;
    currencies_[1] = nullptr;
    currencies_[2] = nullptr;
}

CurrencyFactory::~CurrencyFactory() {
    for (int i = 0; i < 3; i++) {
        if (currencies_[i]) {
            delete currencies_[i];
        }
    }
}

Currency* CurrencyFactory::GetCurrency(int currencyType) {
    switch (currencyType) {
        case 0:  // AUD
            if (!currencies_[0]) {
                currencies_[0] = new Currency("AUD", "Australia", 1.3);
            }
            return currencies_[0];

        case 1:  // AUD
            if (!currencies_[1]) {
                currencies_[1] = new Currency("CAD", "Canada", 1.1);
            }
            return currencies_[1];

        case 2: // USA
            if (!currencies_[2]) {
                currencies_[2] = new Currency("USD", "USA", 1.0);
            }
            return currencies_[2];

        default:
            return nullptr;
    }
}
