//
// Created by Aman Krishna on 20/01/23.
//

// calculate the amount of foreign currency you can buy

float calc_forex(float base, float rate_b, float rate_f) {
    return (base * rate_b) / rate_f;
}