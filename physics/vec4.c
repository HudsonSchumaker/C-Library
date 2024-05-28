#include "vec4.h"

vec4_t vec4_new(float x, float y, float z, float w) {
    return (vec4_t) {
        .x = x,
        .y = y,
        .z = z,
        .w = w
    };
}

vec4_t vec4_clone(vec4_t* v) {
    return vec4_new(v->x, v->y, v->z, v->w);
}

vec2_t vec4_to_vec2(vec4_t* v) {
    return vec2_new(v->x, v->y);
}

vec3_t vec4_to_vec3(vec4_t* v) {
    return vec3_new(v->x, v->y, v->z);
}
