#ifndef MATRIX_H
#define MATRIX_H

#include "vec4.h"

typedef struct {
    float m[4][4];
} mat4_t;

mat4_t mat4_identity(void);
mat4_t mat4_make_scale(const float sx, const float sy, const float sz);
mat4_t mat4_make_translation(const float tx, const float ty, const float tz);
mat4_t mat4_make_rotation_x(const float angle);
mat4_t mat4_make_rotation_y(const float angle);
mat4_t mat4_make_rotation_z(const float angle);

mat4_t mat4_perspective(const float fov, const float aspect, const float znear, const float zfar);
mat4_t mat4_orthographic(const float left, const float right, const float bottom, const float top, const float near, const float far);

vec4_t mat4_mul_vec4(mat4_t* m, vec4_t* v);
mat4_t mat4_mul_mat4(mat4_t* a, mat4_t* b);
mat4_t mat4_look_at(vec3_t* eye, vec3_t* target, vec3_t* up);
void mat4_to_array(mat4_t* mat, float* array);

#endif
