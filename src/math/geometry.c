//  O3 Ozone Project Lab
//  geometry.c - areas, volumes
//  math.net - reference for formulas
//  Created by Hudson Schumaker on 16.08.04.
//  Copyright © 2020 SchumakerTeam. All rights reserved.
//

#include "geometry.h"
#include <math.h>

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
    // A = π * r²
    return  pi * (r * r);
}

float area_sphere(register float r) {
    // A = 4πr²
    return 4.0f * pi * (r * r);
}

// volumes
float volume_cube(register float s) {
    // V = s³
    return s * s * s;
}

float volume_cone(register float r, register float h) {
    // V = (1/3)πr²h
    return (((1.0f / 3.0f) * pi) * (r * r)) * h;
}

float volume_cylinder(register float r, register float h) {
    // V = πr²h
    return  pi * (r * r) * h;
}

float volume_sphere(register float r) {
    // V = 4/3πr³
    return (((4.0f / 3.0f) * pi) * (r * r * r));
}

float area_ellipse(float a, float b) {
    //  A = πab
    return pi * a * b;
}

float area_sector(float r, float angle) {
    // A = 1/2 * r² * θ
    return 0.5f * r * r * angle;
}

float volume_rectangular_prism(float l, float w, float h) {
    // V = lwh
    return l * w * h;
}

float volume_pyramid(float b, float h) {
    // V = Bh/3
    return (b * h) / 3.0f;
}

float volume_torus(float r, float R) {
    // V = 2π²Rr²
    return 2.0f * pi * pi * R * r * r;
}
