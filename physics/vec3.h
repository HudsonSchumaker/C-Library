#ifndef VEC3_H
#define VEC3_H

typedef struct {
    float x, y, z;
} vec3_t;

float vec3_maginitude(vec3_t v);
float vec3_dot(vec3_t a, vec3_t b);
vec3_t vec3_add(vec3_t a, vec3_t b);
vec3_t vec3_sub(vec3_t a, vec3_t b);
vec3_t vec3_mul(vec3_t v, float factor);
vec3_t vec3_div(vec3_t v, float factor);
vec3_t vec3_cross(vec3_t a, vec3_t b);
void vec3_normalize(vec3_t* v);
vec3_t vec3_rotate_x(vec3_t v, float angle);
vec3_t vec3_rotate_y(vec3_t v, float angle);
vec3_t vec3_rotate_z(vec3_t v, float angle);

#endif
