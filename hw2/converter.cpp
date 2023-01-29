//
// Created by Aman Krishna on 28/01/23.
//

#include "converter.h"
#include "currency.h"

double ConvertFromUSD(CurrencyType currencytype, double amount)
{
    double rate = 1.0;
    double foreignamount = 0.0;
    switch (currencytype)
    {
        case USD:
        {
            Currency usd("USD", 1.0);
            foreignamount = usd.ConvertFromUSD(amount);
            break;
        }
        case EUR:
        {
            Currency eur("EUR", 0.92);
            foreignamount = eur.ConvertFromUSD(amount);
            break;
        }
        case GBP:
        {
            Currency gbp("GBP", 0.81);
            foreignamount = gbp.ConvertFromUSD(amount);
            break;
        }
        case CAD:
        {
            Currency cad("CAD", 1.32);
            foreignamount = cad.ConvertFromUSD(amount);
            break;
        }
        case AUD:
        {
            Currency aud("AUD", 1.42);
            foreignamount = aud.ConvertFromUSD(amount);
            break;
        }
        case JPY:
        {
            Currency jpy("JPY", 110.0);
            foreignamount = jpy.ConvertFromUSD(amount);
            break;
        }
        case INR:
        {
            Currency inr("INR", 74.0);
            foreignamount = inr.ConvertFromUSD(amount);
            break;
        }
        default:
            break;
    }
    return foreignamount;
}

double ConvertToUSD(CurrencyType currencytype, double amount)
{
    double rate = 1.0;
    double usdamount = 0.0;
    switch (currencytype)
    {
        case USD:
        {
            Currency usd("USD", 1.0);
            usdamount = usd.ConvertToUSD(amount);
            break;
        }
        case EUR:
        {
            Currency eur("EUR", 0.92);
            usdamount = eur.ConvertToUSD(amount);
            break;
        }
        case GBP:
        {
            Currency gbp("GBP", 0.81);
            usdamount = gbp.ConvertToUSD(amount);
            break;
        }
        case CAD:
        {
            Currency cad("CAD", 1.32);
            usdamount = cad.ConvertToUSD(amount);
            break;
        }
        case AUD:
        {
            Currency aud("AUD", 1.42);
            usdamount = aud.ConvertToUSD(amount);
            break;
        }
        case JPY:
        {
            Currency jpy("JPY", 110.0);
            usdamount = jpy.ConvertToUSD(amount);
            break;
        }
        case INR:
        {
            Currency inr("INR", 74.0);
            usdamount = inr.ConvertToUSD(amount);
            break;
        }
        default:
            break;
    }
    return usdamount;
}

//