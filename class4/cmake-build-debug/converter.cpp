//
// Created by Aman Krishna on 27/01/23.
//

double Currency::ConvertFromUSD(double amount)
{
    return amount * exchange_rate_;
}
