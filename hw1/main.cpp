//Write a Currency Converter program
//Should handle 7 currencies (including USD)
//The user should be able to select the base currency and the foreign currency
//The user should be able to perform any number of currency conversions in a single program run (without restarting the program).
//Handle gracefully program shutdown based on a user input
//Use functions whenever appropriate

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include "convert.h"
using namespace std;

enum Currency {USD=0, EUR=1, GBP=2, CAD=3, AUD=4, JPY=5, INR=6};

int main() {
    int base_currency;
    int foreign_currency;
    float base_amount;
    float foreign_amount;
    float rate_base=1;
    float rate_foreign=1;
    bool quit = false;
    
    while (!quit) {
        cout << "Please enter the base currency (0 for USD, 1 for EUR, 2 for GBP, 3 for CAD, 4 for AUD, 5 for JPY, 6 for INR): ";
        cin >> base_currency;
        rate_base = get_rate(base_currency);
        cout << "Please enter the foreign currency (0 for USD, 1 for EUR, 2 for GBP, 3 for CAD, 4 for AUD, 5 for JPY, 6 for INR): ";
        cin >> foreign_currency;
        rate_foreign=get_rate(foreign_currency);
        cout << "Please enter the amount in the base currency: ";
        cin >> base_amount;

        foreign_amount = calc_forex(base_amount, rate_base, rate_foreign);
        
        cout << "The amount in the foreign currency is: " << foreign_amount << endl;
        
        cout << "Do you want to quit? (y/n): ";
        char quit_char;
        cin >> quit_char;
        if (quit_char == 'y') {
            quit = true;
        }
    }
    
}

