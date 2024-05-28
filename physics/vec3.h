#ifndef VEC3_H
#define VEC3_H

#include "vec2.h"
#include "vec4.h"

typedef struct {
    union {
        struct {
            float x;
            float y;
            float z;
        };
      float asArray[3];
   };
} vec3_t;

vec3_t vec3_new(float x, float y, float z);
vec3_t vec3_clone(vec3_t* v);
vec3_t vec3_add(vec3_t* a, vec3_t* b);
vec3_t vec3_sub(vec3_t* a, vec3_t* b);
vec3_t vec3_mul(vec3_t* v, float s);
vec3_t vec3_div(vec3_t* v, float s);

vec3_t vec3_rotate_x(vec3_t* v, float angle);
vec3_t vec3_rotate_y(vec3_t* v, float angle);
vec3_t vec3_rotate_z(vec3_t* v, float angle);

vec3_t vec3_cross(vec3_t* a, vec3_t* b);
vec3_t vec3_normal(vec3_t* v);
vec3_t vec3_unit_vector(vec3_t* v);

void vec3_normalize(vec3_t* v);
void vec3_scale(vec3_t* v, float s);

float vec3_dot(vec3_t* a, vec3_t*b);
float vec3_magnitude(vec3_t* v);
float vec3_magnitude_squared(vec3_t* v);

vec2_t vec3_to_vec2(vec3_t* v);
vec4_t vec3_to_vec4(vec3_t* v);

#endif
