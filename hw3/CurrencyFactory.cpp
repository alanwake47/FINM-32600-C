#include "CurrencyFactory.h"
#include <stdexcept>
#include <iostream>
using namespace std;

Currency* CurrencyFactory::GetCurrency(const string& currencySymbol) {
    auto iter = currencies_.find(currencySymbol);
    if (iter != currencies_.end()) {
        return iter->second.get();
    }
    // currency object does not exist, create and add to the map
    if (currencySymbol == "USD") {
        cout << "Creating USD currency object\n";
        currencies_[currencySymbol] = make_shared<Currency>("USD", 1.0);
    }
    else if (currencySymbol == "EUR") {
        cout << "Creating EUR currency object\n";
        currencies_[currencySymbol] = make_shared<Currency>("EUR", 1.07);
    }
    else if (currencySymbol == "JPY") {
        cout << "Creating JPY currency object\n";
        currencies_[currencySymbol] = make_shared<Currency>("JPY", 0.0075);
    }
    else if (currencySymbol == "AUD") {
        cout << "Creating AUD currency object\n";
        currencies_[currencySymbol] = make_shared<Currency>("AUD", 0.69);
    }
    else if (currencySymbol == "CAD") {
        cout << "Creating CAD currency object\n";
        currencies_[currencySymbol] = make_shared<Currency>("CAD", 0.74);
    }
    else if (currencySymbol == "INR") {
        cout << "Creating INR currency object\n";
        currencies_[currencySymbol] = make_shared<Currency>("INR", 0.012);
    }
    else if (currencySymbol == "GBP") {
        cout << "Creating GBP currency object\n";
        currencies_[currencySymbol] = make_shared<Currency>("GBP", 1.2);
    }
    else {
        throw runtime_error("Unknown currency symbol: " + currencySymbol);
    }
    return currencies_[currencySymbol].get();
}
