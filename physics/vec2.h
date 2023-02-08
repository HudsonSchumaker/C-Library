#ifndef VEC2_H
#define VEC2_H

typedef struct {
    float x;
    float y;
} vec2_t;

float vec2_magnitude(vec2_t v);
vec2_t vec2_add(vec2_t a, vec2_t b);
vec2_t vec2_sub(vec2_t a, vec2_t b);
vec2_t vec2_mul(vec2_t v, float factor);
vec2_t vec2_div(vec2_t v, float factor);

#endif
