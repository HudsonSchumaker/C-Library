/**
 * @file set.h
 * @brief Header file for a dynamic set implementation in C.
 * @author Hudson Schumaker
 * @version 1.0.0
 * @copyright Copyright (c) 2024, Dodoi-Lab
 */
#ifndef DE_SET_H
#define DE_SET_H

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define SET_INIT_CAPACITY 64
#define SET_RESIZE_FACTOR 128

typedef struct set_t
{
    void *array;
    size_t size;
    size_t capacity;
    size_t type_size;
    int (*equals)(const void *, const void *); // Comparison function to detect duplicates
} set_t;

void set_init(set_t *set, size_t type_size, int (*equals)(const void *, const void *));
void set_init_size(set_t *set, size_t type_size, size_t reserve, int (*equals)(const void *, const void *));
void set_add(set_t *set, void *value);
void *set_get(set_t *set, size_t index);
bool set_contains(set_t *set, void *value);
bool set_remove(set_t *set, void *value);

int set_equals_int(const void* a, const void* b);
int set_equals_float(const void* a, const void* b);
int set_equals_string(const void* a, const void* b);

#endif /* DE_SET_H */
