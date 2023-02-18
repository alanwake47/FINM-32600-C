#include "CurrencyFactory.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

//We have done the following changes to the original currency converter code submitted in assignment 2.

//The input and output files are in the debug folder of my zip file (By CLion convention). Have a go at it!

// 1. We have added a new class CurrencyFactory which is responsible for creating currency objects.
// 2. We have added a new method GetCurrency in CurrencyFactory class which is responsible for creating currency objects. This is lazy initialization.
// 3. We have added File I/O using streams to read the input from a file and write the output to a file.
// 4. We have added error handling to handle invalid input format and unknown currency symbol as well as file I/O errors.
// 5. We are using a shared_ptr to manage the currency objects created by the CurrencyFactory class. Smart ptr.
// 6. We are using a map to store the currency objects created by the CurrencyFactory class.
// 7. We have added a destructor to the Currency class to print a message when the currency object is destroyed.
// 8. Use const reference to pass the currency object to the ConvertTo method.
// 9. We are writing to a file.
// 10. We are using auto to create currencies.

int main() {
    CurrencyFactory factory;
    try {
        string input_file = "currency_input.txt";
        string output_file = "currency_output.txt";
    
        ifstream input(input_file);
        ofstream output(output_file);

        if (!input.is_open() || !output.is_open()) {
            cerr << "Error: failed to open input/output file\n";
            return 1;
        }

        string line;
        while (getline(input, line)) {
            istringstream iss(line);
            vector<string> tokens;
            string token;
            while (getline(iss, token, ',')) {
                tokens.push_back(token);
            }
            if (tokens.size() != 3) {
                cerr << "Error: invalid input format\n";
                return 1;
            }

            double amount = stod(tokens[0]);
            string from_currency = tokens[1];
            string to_currency = tokens[2];

            cout << "The input has been read from " << input_file << '\n';
            cout << "Converting " << amount << ' ' << from_currency << " to " << to_currency << '\n';

            auto from = factory.GetCurrency(from_currency);
            auto to = factory.GetCurrency(to_currency);
            double converted = from->ConvertTo(amount, *to);

            output << amount << ' ' << from_currency << " = " << converted << ' ' << to_currency << '\n';
            cout << "The output has been written to " << output_file << '\n';
            cout << amount << ' ' << from_currency << " = " << converted << ' ' << to_currency << '\n';
        }

        input.close();
        output.close();

        //do a while loop which asks te user to exit at the end

        while  (true) {
            cout << "Do you want to convert more currencies (other than the currency_input.txt)? (y/n): ";
            string answer;
            cin >> answer;
            if (answer == "n") {
                break;
            }
            else if (answer == "y") {
                //ask the user to enter a currency to convert from
                cout << "Enter the currency you want to convert from [USD, CAD, AUD, INR, GBP, EUR, JPY]: ";
                string from_currency;
                cin >> from_currency;
                auto from = factory.GetCurrency(from_currency);
                //ask the user to enter a currency to convert to
                cout << "Enter the currency you want to convert to [USD, CAD, AUD, INR, GBP, EUR, JPY]: ";
                string to_currency;
                cin >> to_currency;
                auto to = factory.GetCurrency(to_currency);
                //ask the user to enter an amount to convert
                cout << "Enter the amount you want to convert: ";
                double amount;
                cin >> amount;
                //convert the amount from the from_currency to the to_currency
                double converted = from->ConvertTo(amount, *to);
                //print the result
                cout << amount << ' ' << from_currency << " = " << converted << ' ' << to_currency << '\n';
            }
            else {
                cout << "Invalid input\n";
            }
        }
        
    }
    catch (runtime_error& e) {
        cerr << "Error: " << e.what() << '\n';
        return 1;
    }
    return 0;
}
