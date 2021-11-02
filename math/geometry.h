#ifndef GEOMETRY_H
#define GEOMETRY_H

float area_square(register float s);
float area_rectangle(register float l, register float w);
float area_triangle(register float b, register float h);
float area_parallelogram(register float b, register float h);
float area_trapezoid(register float b, register float B, register float h);
float area_circle(register float r);
float area_sphere(register float r);
float volume_cube(register float s);
float volume_cone(register float r, register float h);
float volume_cylinder(register float r, register float h);
float volume_sphere(register float r);
