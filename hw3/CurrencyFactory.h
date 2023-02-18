#ifndef CURRENCY_FACTORY_HPP
#define CURRENCY_FACTORY_HPP

#include "currency.h"
#include <map>
#include <memory>
using std::string;
using std::map;
using std::shared_ptr;

class CurrencyFactory {
public:
    Currency* GetCurrency(const string& currencySymbol);

private:
    map<string, shared_ptr<Currency>> currencies_;
};

#endif
