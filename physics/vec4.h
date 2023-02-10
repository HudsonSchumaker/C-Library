#ifndef VEC4_H
#define VEC4_H

#include "vec3.h"

typedef struct {
    float x, y, z, w;
} vec4_t;

vec4_t vec4_from_vec3(vec3_t v);
vec3_t vec3_from_vec4(vec4_t v);

#endif