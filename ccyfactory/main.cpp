#include <iostream>
#include "currency.h"
#include "converter.h"
using namespace std;

int main() {
    bool quit = false;

    while (!quit) {
        cout << "Enter the base currency- (0 : USD, 1 : EUR, 2 : GBP, 3 : CAD, 4 : AUD, 5 : JPY, 6 : INR)";
        int basecurrency=0;
        cin >> basecurrency;

        cout << "Enter the foreign currency- (0 : USD, 1 : EUR, 2 : GBP, 3 : CAD, 4 : AUD, 5 : JPY, 6 : INR)";
        int foreigncurrency=0;
        cin >> foreigncurrency;

        cout << endl << "Amount of Base Currency: ";
        double baseamt = 0;
        cin >> baseamt;

        double usdAmount = ConvertToUSD(static_cast<CurrencyType>(basecurrency), baseamt);
        double foreignAmount = ConvertFromUSD(static_cast<CurrencyType>(foreigncurrency), usdAmount);

        if (basecurrency == foreigncurrency) {
            cout << "Amount of Foreign Currency: " << baseamt << endl;
        } else {
            cout << "Amount of Foreign Currency: " << foreignAmount << endl;
        }
        cout << endl;


        cout << "Do you want to quit? (y/n): ";
        char quit_char;
        cin >> quit_char;
        if (quit_char == 'y') {
            quit = true;
        }
    }
}
//