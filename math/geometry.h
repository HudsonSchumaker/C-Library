//  O3 Ozone Project Lab
//  geometry.h - areas, volumes
//  Created by Hudson Schumaker on 16.08.04.
//  Copyright © 2020 SchumakerTeam. All rights reserved. 

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
float area_ellipse(register float a, register float b);
float area_sector(register float r, register float angle);
float volume_rectangular_prism(register float l, register float w, register float h);
float volume_pyramid(register float b, register float h);
float volume_torus(register float r, register float R);

#endif
