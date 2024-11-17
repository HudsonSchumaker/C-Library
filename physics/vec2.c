#include "vec2.h"
#include <math.h>

vec2_t vec2_new(float x, float y) {
    return (vec2_t) {
        .x = x,
        .y = y
    };
}

vec2_t vec2_clone(vec2_t* v) {
    return vec2_new(v->x, v->y);
}

vec2_t vec2_add(vec2_t* a, vec2_t* b) {
    return vec2_new(a->x + b->x, a->y + b->y);
}

vec2_t vec2_sub(vec2_t* a, vec2_t* b) {
    return vec2_new(a->x - b->x, a->y - b->y);
}

vec2_t vec2_mul(vec2_t* v, float s) {
    return vec2_new(v->x * s, v->y * s);
}

vec2_t vec2_div(vec2_t* v, float s) {
    return vec2_new(v->x / s, v->y / s);
}

vec2_t vec2_rotate(vec2_t* v, float angle) {
    return vec2_new(v->x * cosf(angle) - v->y * sinf(angle), v->x * sinf(angle) + v->y * cosf(angle));
}

vec2_t vec2_normal(vec2_t* v) {
    return vec2_new(-v->y, v->x);
}

vec2_t vec2_unit_vector(vec2_t* v) {
    vec2_t result = vec2_new(0.0f, 0.0f);
    float length = vec2_magnitude(v);
    if (length != 0.0f) {
        result.x = v->x / length;
        result.y = v->y / length;
    }
    return result;
}

void vec2_normalize(vec2_t* v) {
    float length = vec2_magnitude(v);
    if (length != 0.0f) {
        v->x /= length;
        v->y /= length;
    }
}

void vec2_scale(vec2_t* v, float s) {
    v->x *= s;
    v->y *= s;
}

float vec2_dot(vec2_t* a, vec2_t* b) {
    return (a->x * b->x) + (a->y * b->y);
}

float vec2_cross(vec2_t* a, vec2_t* b) {
    return (a->x * b->y) - (a->y * b->x);
}

float vec2_magnitude(vec2_t* v) {
    return sqrtf(v->x * v->x + v->y * v->y);
}

float vec2_magnitude_squared(vec2_t* v) {
    return v->x * v->x + v->y * v->y;
}

vec3_t vec2_to_vec3(vec2_t* v) {
    return vec3_new(v->x, v->y, 0.0f);
}

vec4_t vec2_to_vec4(vec2_t* v) {
    return vec4_new(v->x, v->y, 0.0f, 1.0f);
}

