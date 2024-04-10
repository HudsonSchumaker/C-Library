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

bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

float distanceBetweenPoints(float x1, float y1, float x2, float y2) {
    // using the euclidean distance formula
    return sqrtf((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

float normalizeAngle(float angle) {
    angle = remainder(angle, TWO_PI);
    if (angle < 0) {
        angle = TWO_PI + angle;
    }
    return angle;
}


float deg2Rad(float angle) {
    return angle * PI / 180.0f;
}

float rad2Deg(float angle) {
    return angle * 180.0f / PI;
}