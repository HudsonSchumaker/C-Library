//  O3 Ozone Project Lab
//  math.c - addition, subtraction, multiplication, division.
//  Created by Hudson Schumaker on 14.08.20.
//  Copyright © 2020 SchumakerTeam. All rights reserved.
//

// Interger operations
// ADD, SUB, MUL, DIV, INC, DEC, POW, CUBE
int add_int(register int x0, register int x1) {
    return x0 + x1;
}

int add_3_int(register int x0, register int x1, register int x2) {
    return x0 + x1 + x2;
}

int add_4_int(int x0, int x1, int x2, int x3) {
    return x0 + x1 + x2 + x3;
}

int sub_int(register int x0, register int x1) {
    return x0 - x1;
}

int mult_int(register int x0, register int x1) {
    return x0 * x1;
}

int div_int(register int x0, register int x1) {
    return x0 / x1;
}

int inc_int(register int x0) {
    return x0++;
}

int dec_int(register int x0) {
    return x0--;
}

int pow_int(register int x0) {
    return x0 * x0;
}

int cube_int(register int x0) {
    return x0 * x0 * x0;
}

int factorial(register int n) {
    register int fact = 1;
    for (register int i = n; i > 1; --i) {
        fact *= i;
    }
    return fact;
}

// Long operatations
// ADD, SUB, MUL, DIV, INC, DEC
long add_long(register long x0, register long x1) {
    return x0 + x1;
}

long sub_long(register long x0, register long x1) {
    return x0 - x1;
}

long mult_long(register long x0, register long x1) {
    return x0 * x1;
}

long div_long(register long x0, register long x1) {
    return x0 / x1;
}

long inc_long(register long x0) {
    return x0++;
}

long dec_long(register long x0) {
    return x0--;
}

// Float operatations
// ADD, SUB, MUL, DIV
float add_float(register float d0, register float d1) {
    return d0 + d1;
}

float sub_float(register float d0, register float d1) {
    return d0 - d1;
}

float mult_float(register float d0, register float d1) {
    return d0 * d1;
}

float div_float(float d0, float d1) {
    return d0 / d1;
}

// Double operations
// ADD, SUB, MUL, DIV
double add_double(double d0, double d1) {
    return d0 + d1;
}

double sub_double(double d0, double d1) {
    return d0 - d1;
}

double mult_double(double d0, double d1) {
    return d0 * d1;
}

double div_double(double d0, double d1) {
    return d0 / d1;
}
