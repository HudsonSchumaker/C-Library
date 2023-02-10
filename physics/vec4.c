#include "vec4.h"

vec4_t vec4_from_vec3(vec3_t v) {
    vec4_t result = { v.x, v.y, v.z, 1.0 };
    return result;
}

vec3_t vec3_from_vec4(vec4_t v) {
    vec3_t result = { v.x, v.y, v.z };
    return result;
}
