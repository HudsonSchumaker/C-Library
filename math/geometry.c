//  O3 Ozone Project Lab
//  geometry.c - areas, volumes
//  math.net - reference for formulas
//  Created by Hudson Schumaker on 16.08.04.
//  Copyright © 2020 SchumakerTeam. All rights reserved.

const float pi = 3.141592f;

// Double areas 
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
    return (b * h) / 2.0;
}

float area_parallelogram(register float b, register float h) {
    // A = bh
    return b * h;
}

double area_trapezoid(register double b, register double B, register double h) {
    // A = (B + b)h / 2
    return ((B + b) * h) / 2;
}

double area_circle(register double r) {
    // A = pi * r²
    return  pi * (r * r);
}

double area_sphere(register double r) {
    // A = 4pir²
    return 4 * pi * (r * r);
}

// Double volumes
double volume_cube(register double s) {
    // V = s³
    return s * s * s;
}

double volume_cone(register double r, register double h) {
    // V = (1/3)pir²h
    return (((1 / 3) * pi) * (r * r)) * h;
}

double volume_cylinder(register double r, register double h) {
    // V = pir²h
    return  pi * (r * r) * h;
}

double volume_sphere(register double r) {
    // V = 4/3pir³
    return (((4 / 3) * pi) * (r * r * r));
}
