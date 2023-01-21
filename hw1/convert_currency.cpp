//
// Created by Aman Krishna on 17/01/23.
//
         
#include <string>
using namespace std;

float get_rate(int currency)
{
    float rate;
    switch(currency)
    {
        case 1:
            rate=0.93;
            break;
        case 2:
            rate=0.82;
            break;
        case 3:
            rate=1.34;
            break;
        case 4:
            rate=1.43;
            break;
        case 5:
            rate=110.98;
            break;
        case 6:
            rate=82;
            break;
        default:
            rate=1;
            break;
    }
    return rate;
}

string enum_to_string(int currency)
{
    string currency_name;
    switch(currency)
    {
        case 1:
            currency_name="EUR";
            break;
        case 2:
            currency_name="GBP";
            break;
        case 3:
            currency_name="CAD";
            break;
        case 4:
            currency_name="AUD";
            break;
        case 5:
            currency_name="JPY";
            break;
        case 6:
            currency_name="INR";
            break;
        default:
            currency_name="USD";
            break;
    }
    return currency_name;
}

