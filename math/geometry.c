//  O3 Ozone Project Lab
//  geometry.c - areas, volumes
//  math.net - reference for formulas
//  Created by Hudson Schumaker on 16.08.04.
//  Copyright © 2020 SchumakerTeam. All rights reserved.

const double pi = 3.141592;

// Double areas 
double area_square(register double s) {
    // A = s²
    return s * s;
}

double area_rectangle(register double l, register double w) {
    // A = lw
    return l * w;
}

double area_triangle(double b, double h) {
    // A = bh / 2
    return (b * h) / 2.0;
}

double area_parallelogram(double b, double h) {
    // A = bh
    return b * h;
}

double area_trapezoid(double b, double B, double h) {
    // A = (B + b)h / 2
    return ((B + b) * h) / 2;
}

double area_circle(double r) {
    // A = pi * r²
    return  pi * (r * r);
}

double area_sphere(double r) {
    // A = 4pir²
    return 4 * pi * (r * r);
}

// Double volumes
double volume_cube(double s) {
    // V = s³
    return s * s * s;
}

double volume_cone(double r, double h) {
    // V = (1/3)pir²h
    return (((1 / 3) * pi) * (r * r)) * h;
}

double volume_cylinder(double r, double h) {
    // V = pir²h
    return  pi * (r * r) * h;
}

double volume_sphere(double r) {
    // V = 4/3pir³
    return (((4 / 3) * pi) * (r * r * r));
}
