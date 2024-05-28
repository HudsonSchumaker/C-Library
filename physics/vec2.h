#ifndef VEC2_H
#define VEC2_H

#include "vec3.h"
#include "vec4.h"

typedef struct {
    union {
        struct {
            float x;
            float y;
        };
      float asArray[2];
   };
} vec2_t;

vec2_t vec2_new(float x, float y);
vec2_t vec2_clone(vec2_t* v);
vec2_t vec2_add(vec2_t* a, vec2_t* b);
vec2_t vec2_sub(vec2_t* a, vec2_t* b);
vec2_t vec2_mul(vec2_t* v, float s);
vec2_t vec2_div(vec2_t* v, float s);

vec2_t vec2_rotate(vec2_t* v, float angle);
vec2_t vec2_normal(vec2_t* v);
vec2_t vec2_unit_vector(vec2_t* v);

void vec2_normalize(vec2_t* v);
void vec2_scale(vec2_t* v, float s);

float vec2_dot(vec2_t* a, vec2_t*b);
float vec2_cross(vec2_t* a, vec2_t* b);
float vec2_magnitude(vec2_t* v);
float vec2_magnitude_squared(vec2_t* v);

vec3_t vec2_to_vec3(vec2_t* v);
vec4_t vec2_to_vec4(vec2_t* v);

#endif