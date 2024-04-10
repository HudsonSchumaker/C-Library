//
//  arithmetic.h
//  c-library
//
//  Created by Hudson Schumaker on 30.03.22.
//

#ifndef arithmetic_h
#define arithmetic_h

#include <math.h>
#include <stdbool.h>
const float PI = 3.14159265358979323846f;
const float TWO_PI = 6.28318530718f;

float gcd(register float n1, register float n2);
float lcm(register float n1, register float n2);
bool isPowerOfTwo(register int n);
float distanceBetweenPoints(float x1, float y1, float x2, float y2);
float normalizeAngle(register float angle);
float deg2Rad(register float angle);
float rad2Deg(register float angle);

#endif
