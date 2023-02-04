//
// Created by Aman Krishna on 03/02/23.
//

#include "nearest_prime.h"

int nearestPrime(int num) {
    int i, j;
    int prime = 0;
    for (i = num; i >= 2; i--) {
        for (j = 2; j <= i; j++) {
            if (i % j == 0) {
                break;
            }
        }
        if (i == j) {
            prime = i;
            break;
        }
    }
    return prime;
}
