//  O3 Ozone Project Lab
//  arithmetic.c
//  Created by Hudson Schumaker on 14.08.20.
//  Copyright © 2020 SchumakerTeam. All rights reserved.

#include "arithmetic.h"

float gcd(register float n1, register float n2) {
    float gcd = 0.0f;
    for (float i = 1.0f; i <= n1 && i <= n2; ++i) {
        if(fmodf(n1, i) == 0 && fmodf(n2, i) == 0) {
            gcd = i;
        }
    }
    return gcd;
}

float lcm(register float n1, register float n2) {
    float gcd = 0.0f;
    float lcm = 0.0f;
    for (float i = 1.0f; i <= n1 && i <= n2; ++i) {
        if (fmodf(n1, i) == 0 && fmodf(n2, i) == 0) {
            gcd = i;
        }
    }
    lcm = (n1 * n2) / gcd;
    return lcm;
}
