#include <string>
#include "Currency.h"
#include "CurrencyFactory.h"

// I am attempting VERSION 2

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    CurrencyFactory factory;

    Currency* aud = factory.GetCurrency(0);
    Currency* cad = factory.GetCurrency(1);
    Currency* usd = factory.GetCurrency(2);

    cout << aud->GetSymbol() << " " << aud->GetCountry() << " " << aud->GetExchangeRate()<< endl;
    cout << cad->GetSymbol() << " " << cad->GetCountry() << " " << cad->GetExchangeRate() << endl;
    cout << usd->GetSymbol() << " " << usd->GetCountry() << " " << usd->GetExchangeRate() << endl;

    return 0;
}
