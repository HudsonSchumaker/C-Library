#include "matrix.h"

mat4_t mat4_t_identity(void) {
    // | 1 0 0 0 |
    // | 0 1 0 0 |
    // | 0 0 1 0 |
    // | 0 0 0 1 |
    mat4_t matrix = {{
        {1, 0, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1}
    }};

    return matrix;
}

mat4_t mat4_t_make_scale(float sx, float sy, float sz) {
    // | sx 0 0 0 |
    // | 0 sy 0 0 |
    // | 0 0 sz 0 |
    // | 0 0 0  1 |
    mat4_t matrix = mat4_t_identity();
    matrix.m[0][0] = sx;
    matrix.m[1][1] = sy;
    matrix.m[2][2] = sz;

    return matrix;
}