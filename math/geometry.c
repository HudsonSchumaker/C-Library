//  O3 Ozone Project Lab
//  geometry.c
//  Created by Hudson Schumaker on 16.12.20.
//  Copyright © 2020 SchumakerTeam. All rights reserved.

const double pi = 3.141592;

// Double areas 
double area_square(double s) {
    // A = s²
    return s * s;
}

double area_rectangle(double l, double w) {
    // A = lw
    return l * w;
}

double area_triangle(double b, double h) {
    // A = bh / 2
    return (b * h) / 2.0;
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
