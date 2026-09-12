/**
 * @file queue.h
 * @brief Header file for a dynamic queue implementation in C.
 * @author Hudson Schumaker
 * @version 1.0.0
 * @copyright Copyright (c) 2024, Dodoi-Lab
 */
#ifndef DE_QUEUE_H
#define DE_QUEUE_H

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define Q_INIT_CAPACITY 64
#define Q_RESIZE_FACTOR 2

typedef struct
{
    void *array;
    size_t size;
    size_t head;
    size_t tail;
    size_t capacity;
    size_t type_size;
} queue_t;

void queue_init(queue_t *queue, size_t type_size);
void queue_add(queue_t *queue, void *value);
void *queue_pool(queue_t *queue);
void *queue_peek(queue_t *queue);
size_t queue_size(queue_t *queue);
size_t queue_capacity(queue_t *queue);
bool queue_is_empty(queue_t *queue);
void queue_clear(queue_t *queue);
void queue_free(queue_t *queue);

#endif /* DE_QUEUE_H */
