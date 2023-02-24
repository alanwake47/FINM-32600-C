#include <iostream>
#include "europeanput.h"
#include "europeancall.h"
using namespace std;

//AMAN KRISHNA
//UCID: 12371175
//email: amank@uchicago.edu

int main() {
    //Define the parameters
    //Call
    double S0 = 100;
    double K = 100;
    double T = 1;
    double sigma = 0.3;
    double r = 0.05;

    //Put
    double S0_put = 120;
    double K_put = 120;
    double T_put = 2;
    double sigma_put = 0.4;
    double r_put = 0.1;

    //Create an European Call object
    EuropeanCall call(K, T);

    //Create an European Put object
    EuropeanPut put(K_put, T_put);

    //Price of the call
    double call_price = call.Price(S0, r, sigma);

    //Price of the put
    double put_price = put.Price(S0_put, r_put, sigma_put);

    //Delta of the call
    double call_delta = call.Delta(S0, r, sigma);

    //Delta of the put
    double put_delta = put.Delta(S0_put, r_put, sigma_put);

    //Gamma of the call
    double call_gamma = call.Gamma(S0, r, sigma);

    //Gamma of the put
    double put_gamma = put.Gamma(S0_put, r_put, sigma_put);

    //Print the results
    cout<<"The call with K = "<<K<<" , T = "<<T<<" , sigma = "<<sigma<<" , r = "<<r<<" has the following properties:"<<endl;
    cout << "Call price: " << call_price << endl;
    cout << "Call delta: " << call_delta << endl;
    cout << "Call gamma: " << call_gamma << endl;
    cout << endl;

    cout<<"The put with K = "<<K_put<<" , T = "<<T_put<<" , sigma = "<<sigma_put<<" , r = "<<r_put<<" has the following properties:"<<endl;
    cout << "Put delta: " << put_delta << endl;
    cout << "Put price: " << put_price << endl;
    cout << "Put gamma: " << put_gamma << endl;
}
