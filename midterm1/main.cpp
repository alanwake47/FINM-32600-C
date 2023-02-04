#include <iostream>
#include "currency.h"
#include "currencyfactory.h"
using namespace std;

//VERSION 2

int main() {
    CurrencyFactory* factory = CurrencyFactory::GetInstance();
    Currency* aud = factory->CreateCurrency(AUD);
    Currency* cad = factory->CreateCurrency(CAD);
    Currency* usd = factory->CreateCurrency(USD);
    cout << aud->GetSymbol() << " " << aud->GetCountry() << " " << aud->GetExchangeRate() << endl;
    cout << cad->GetSymbol() << " " << cad->GetCountry() << " " << cad->GetExchangeRate() << endl;
    cout << usd->GetSymbol() << " " << usd->GetCountry() << " " << usd->GetExchangeRate() << endl;
    CurrencyFactory::DestroyInstance();
    return 0;
}
