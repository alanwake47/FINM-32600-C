#include <iostream>
#include <vector>
#include <string>

#include "Add.h"

using std::cout;
using std::endl;

class Currency
{
public:
	Currency(std::string symbol, double rate);
};

int main()
{
    cout << Add(1, 2) << endl;
    cout << Add(1.2, 2.4) << endl;
}
