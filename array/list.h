/**
* @file list.h
* @brief Header file for a dynamic list implementation in C. 
* @author Hudson Schumaker
* @version 1.0.0
* @copyright Copyright (c) 2024, Dodoi-Lab
*/
#pragma once
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
	void* value;
	size_t size;
	size_t capacity;
	size_t type_size;
} list_t;

void list_init(list_t* list, size_t type_size);
bool list_resize(list_t* list, size_t new_capacity);
bool list_push_back(list_t* list, void* value);
void* list_get(list_t* list, size_t index);
void list_sort(list_t* list, int (*comparator)(const void*, const void*));
size_t list_size(list_t* list);
void list_free(list_t* list);
