// Question 1 - Timothy Taylor
// VERSION IMPLEMENTATION: version-2 (using free-store objects)
#include <iostream>
#include <string>
#include "CurrencyFactory.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

enum CurrencyType { USD = 0, CAD = 1, AUD = 2 };

int main() {
    char choice;
    CurrencyFactory factory;
    do {
        Currency* usd = factory.GetCurrency(USD);
        Currency* cad = factory.GetCurrency(CAD);
        Currency* aud = factory.GetCurrency(AUD);

        cout << usd->GetSymbol() << " " << usd->GetCountry() << " " << usd->GetExchangeRate() << endl;
        cout << cad->GetSymbol() << " " << cad->GetCountry() << " " << cad->GetExchangeRate() << endl;
        cout << aud->GetSymbol() << " " << aud->GetCountry() << " " << aud->GetExchangeRate() << endl;

        cout << "\nReady to exit? (y/n): ";
        choice = 'y';
    } while (choice == 'n');
    return 0;
}