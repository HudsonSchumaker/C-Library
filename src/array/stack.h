/**
 * @file stack.h
 * @brief Header file for a dynamic stack implementation in C.
 * @author Hudson Schumaker
 * @version 1.0.0
 * @copyright Copyright (c) 2024, Dodoi-Lab
 */
#ifndef DE_STACK_H
#define DE_STACK_H

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define STACK_INIT_CAPACITY 64
#define STACK_RESIZE_FACTOR 128

typedef struct stack_t
{
    void *array;
    size_t size;
    size_t capacity;
    size_t type_size;
} stack_t;

void stack_init(stack_t *stack, size_t type_size);
void stack_push(stack_t *stack, void *value);
void *stack_pop(stack_t *stack);
bool stack_is_empty(stack_t *stack);
void stack_free(stack_t *stack);

#endif /* DE_STACK_H */
