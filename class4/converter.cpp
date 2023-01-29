//
// Created by Aman Krishna on 27/01/23.
//

double Currency::ConvertFromUSD(double amount)
{
    return amount * exchange_rate_;
}

double Currency::ConvertToUSD(double amount)
{
    return amount * 1/exchange_rate_;
}
