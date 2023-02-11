#include "vec3.h"

float vec3_magnitude(vec3_t v) {
    return sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}
