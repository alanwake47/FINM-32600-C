//
// Created by Aman Krishna on 24/02/23.
//

#ifndef HW4_OPTION_H
#define HW4_OPTION_H

//Create an option base class
class Option {
public:
    //Constructor
    Option(double strike, double expiry);

    //Price virtual function
    virtual double Price(double spot, double rate, double vol) const = 0;

    //Delta virtual function
    virtual double Delta(double spot, double rate, double vol) const = 0;

    //Gamma virtual function
    virtual double Gamma(double spot, double rate, double vol) const = 0;


protected:
    //d1
    double d1(double spot, double rate, double vol) const;
    //d2
    double d2(double spot, double rate, double vol) const;

    //Normal CDF
    static double cdf(double x) ;
    //Normal PDF
    static double pdf(double x) ;

    //Strike
    double strike_;
    //Expiry
    double expiry_;
};

#endif //HW4_OPTION_H
