#include "vec3.h"
#include <math.h>

vec3_t vec3_new(float x, float y, float z) {
    return (vec3_t) {
        .x = x,
        .y = y,
        .z = z
    };
}

vec3_t vec3_clone(vec3_t* v) {
    return vec3_new(v->x, v->y, v->z);
}

vec3_t vec3_add(vec3_t* a, vec3_t* b) {
    return vec3_new(a->x + b->x, a->y + b->y, a->z + b->z);
}

vec3_t vec3_sub(vec3_t* a, vec3_t* b) {
    return vec3_new(a->x - b->x, a->y - b->y, a->z - b->z);
}

vec3_t vec3_mul(vec3_t* v, float s) {
    return vec3_new(v->x * s, v->y * s, v->z * s);
}

vec3_t vec3_div(vec3_t* v, float s) {
    return vec3_new(v->x / s, v->y / s, v->z / s);
}

vec3_t vec3_rotate_x(vec3_t* v, float angle) {
    float cos_angle = cos(angle);
    float sin_angle = sin(angle);

    vec3_t rotated_vector = {
        .x = v->x,
        .y = v->y * cos_angle - v->z * sin_angle,
        .z = v->y * sin_angle + v->z * cos_angle
    };
    return rotated_vector;
}

vec3_t vec3_rotate_y(vec3_t* v, float angle) {
    float cos_angle = cos(angle);
    float sin_angle = sin(angle);

    vec3_t rotated_vector = {
        .x = v->x * cos_angle + v->z * sin_angle,
        .y = v->y,
        .z = -v->x * sin_angle + v->z * cos_angle
    };
    return rotated_vector;
}

vec3_t vec3_rotate_z(vec3_t* v, float angle) {
    float cos_angle = cos(angle);
    float sin_angle = sin(angle);

    vec3_t rotated_vector = {
        .x = v->x * cos_angle - v->y * sin_angle,
        .y = v->x * sin_angle + v->y * cos_angle,
        .z = v->z
    };
    return rotated_vector;
}

vec3_t vec3_normal(vec3_t* v) {
    return vec3_new(-v->y, v->x, 0);
}

vec3_t vec3_unit_vector(vec3_t* v) {
    vec3_t result = vec3_new(0.0f, 0.0f, 0.0f);
    float length = vec3_magnitude(v);
    if (length != 0.0) {
        result.x = v->x / length;
        result.y = v->y / length;
        result.z = v->z / length;
    }
    return result;
}

void vec3_normalize(vec3_t* v) {
    float length = vec3_magnitude(v);
    if (length != 0.0f) {
        v->x /= length;
        v->y /= length;
        v->z /= length;
    }
}

void vec3_scale(vec3_t* v, float s) {
    v->x *= s;
    v->y *= s;
    v->z *= s;
}

float vec3_dot(vec3_t* a, vec3_t* b) {
    return (a->x * b->x) + (a->y * b->y) + (a->z * b->z);
}

vec3_t vec3_cross(vec3_t* a, vec3_t* b) {
    vec3_t result = {
        .x = a->y * b->z - a->z * b->y,
        .y = a->z * b->x - a->x * b->z,
        .z = a->y * b->y - a->y * b->x
    };
    return result;
}

float vec3_magnitude(vec3_t* v) {
    return sqrt(v->x * v->x + v->y * v->y + v->z * v->z);
}

float vec3_magnitude_squared(vec3_t* v) {
    return v->x * v->x + v->y * v->y + v->z * v->z;
}

vec2_t vec3_to_vec2(vec3_t* v) {
    return vec2_new(v->x, v->y);
}

vec4_t vec3_to_vec4(vec3_t* v) {
    return vec4_new(v->x, v->y, v->z, 1.0f);
}
