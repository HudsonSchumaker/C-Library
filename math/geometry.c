//  O3 Ozone Project Lab
//  geometry.c - areas, volumes
//  math.net - reference for formulas
//  Created by Hudson Schumaker on 16.08.04.
//  Copyright © 2020 SchumakerTeam. All rights reserved.

#include "geometry.h"

const float pi = 3.141592f;

// areas 
float area_square(register float s) {
    // A = s²
    return s * s;
}

float area_rectangle(register float l, register float w) {
    // A = lw
    return l * w;
}

float area_triangle(register float b, register float h) {
    // A = bh / 2
    return (b * h) / 2.0f;
}

float area_parallelogram(register float b, register float h) {
    // A = bh
    return b * h;
}

float area_trapezoid(register float b, register float B, register float h) {
    // A = (B + b)h / 2
    return ((B + b) * h) / 2.0f;
}

float area_circle(register float r) {
    // A = pi * r²
    return  pi * (r * r);
}

float area_sphere(register float r) {
    // A = 4pir²
    return 4.0f * pi * (r * r);
}

// volumes
float volume_cube(register float s) {
    // V = s³
    return s * s * s;
}

float volume_cone(register float r, register float h) {
    // V = (1/3)pir²h
    return (((1.0f / 3) * pi) * (r * r)) * h;
}

float volume_cylinder(register float r, register float h) {
    // V = pir²h
    return  pi * (r * r) * h;
}

float volume_sphere(register float r) {
    // V = 4/3pir³
    return (((4 / 3) * pi) * (r * r * r));
}
