#include <iostream>
#include "europeanput.h"
#include "europeancall.h"
#include "pricer.h"
#include <vector>

using namespace std;

//AMAN KRISHNA
//UCID: 12371175
//email: amank@uchicago.edu

int main() {
    //Define the parameters
    //Call
    double S0 = 100;
    double K = 100;
    double T = 2.0;
    double sigma = 0.3;
    double r = 0.01;
    //make a list of paths 10000, 100000, 1000000
    vector<unsigned long> paths = {10000, 100000, 1000000};

    //Create an European Call object
    EuropeanCall call(K, T);

    //Create an European Put object
    EuropeanPut put(K, T);

    //Test The MCPricer
    MCPricer pricer;
    srand(time(NULL));
    for (int i = 0; i < paths.size(); i++) {
        cout << "The number of paths is: " << paths[i] << endl;
        cout << "The price of the European Call option is: " << pricer.Price(call, S0, r, sigma, paths[i]) << endl;
        cout << "The price of the European Put option is: " << pricer.Price(put, S0, r, sigma, paths[i]) << endl;
    }

}
