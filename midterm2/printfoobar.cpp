//
// Created by Aman Krishna on 03/02/23.
//

// write a function that takes num as an argument and prints the values 1 to nearest_prime(num) inclusive
// Additionally, if the value is divisible by 3, print "Foo" too and if the value is divisible by 5, print "Bar" too and if the value is divisible by both 3 and 5, print "FooBar" too

#include "nearest_prime.h"
#include <iostream>

using namespace std;

void printFooBar(int num) {
    int i;
    for (i = 1; i <= nearestPrime(num); i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << i << " FooBar" << endl;
        } else if (i % 3 == 0) {
            //print i and Foo
            cout << i << " Foo" << endl;
        } else if (i % 5 == 0) {
            //print i and Bar
            cout << i << " Bar" << endl;
        } else {
            //print i
            cout << i << endl;
        }
    }
}