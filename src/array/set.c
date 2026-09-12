/**
* @file set.c
* @author Hudson Schumaker
* @version 1.0.0
*
* Dodoi-Engine is a game engine developed by Dodoi-Lab.
* @copyright Copyright (c) 2025, Dodoi-Lab
*/
#include "set.h"

void set_init(set_t* set, size_t type_size, int (*equals)(const void*, const void*)) {
	set_init_size(set, type_size, SET_INIT_CAPACITY, equals);
}

void set_init_size(set_t* set, size_t type_size, size_t reserve, int (*equals)(const void*, const void*)) {
	set->size = 0;
	set->capacity = reserve;
	set->type_size = type_size;
	set->equals = equals;
	set->array = malloc(set->capacity * set->type_size);
	if (!set->array) {
		fprintf(stderr, "ERROR: set_t, memory allocation failed.\n");
	}
}

bool set_contains(set_t* set, void* value) {
    for (size_t i = 0; i < set->size; i++) {
        void* current = (char*)set->array + i * set->type_size;
        if (set->equals(current, value) == 0) {
            return true;
        }
    }
    return false;
}

void set_add(set_t* set, void* value) {
    if (!set_contains(set, value)) {
        if (set->size == set->capacity) {
            set->capacity += SET_RESIZE_FACTOR;
            void* new_value = realloc(set->array, set->capacity * set->type_size);
            if (new_value) {
				set->array = new_value;
			}
            else {
                fprintf(stderr, "ERROR: set_t, memory reallocation failed\n");
                return;
            }
        }
        memcpy((char*)set->array + set->size * set->type_size, value, set->type_size);
        set->size++;
    }
}

void* set_get(set_t* set, size_t index) {
    if (index < set->size) {
        return (char*)set->array + index * set->type_size;
    }
    return NULL;
}

bool set_remove(set_t *set, void *value) {
    for (size_t i = 0; i < set->size; i++) {
        void* current = (char*)set->array + i * set->type_size;
        if (set->equals(current, value) == 0) {
            if (i < set->size - 1) {
                memmove(current, (char*)set->array + (i + 1) * set->type_size, (set->size - i - 1) * set->type_size);
            }
            set->size--;
            return true;
        }
    }
    return false;
}

int set_equals_int(const void* a, const void* b) {
	return (*(int*)a == *(int*)b) ? 0 : 1;
}

int set_equals_float(const void* a, const void* b) {
	return (*(float*)a == *(float*)b) ? 0 : 1;
}

int set_equals_string(const void* a, const void* b) {
	return (strcmp(*(const char**)a, *(const char**)b) == 0) ? 0 : 1;
}

void set_free(set_t* set) {
    free(set->array);
    set->array = NULL;
    set->size = 0;
    set->capacity = 0;
    set->type_size = 0;
    set->equals = NULL;
}
