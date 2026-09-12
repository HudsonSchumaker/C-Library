#ifndef VEC4_H
#define VEC4_H

#include "vec2.h"
#include "vec3.h"

typedef struct vec4_t
{
    union element
    {
        float x;
        float y;
        float z;
        float w;
    };
    float as_array[4];
} vec4_t;


vec4_t vec4_new(float x, float y, float z, float w);
vec4_t vec4_clone(vec4_t *v);

vec2_t vec4_to_vec2(vec4_t *v);
vec3_t vec4_to_vec3(vec4_t *v);

#endif
