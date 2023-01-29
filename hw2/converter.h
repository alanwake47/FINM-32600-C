//
// Created by Aman Krishna on 28/01/23.
//

#ifndef HW2_CONVERTER_H
#define HW2_CONVERTER_H

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

double ConvertFromUSD(CurrencyType currencytype, double amount);
double ConvertToUSD(CurrencyType currencytype, double amount);

#endif //HW2_CONVERTER_H
