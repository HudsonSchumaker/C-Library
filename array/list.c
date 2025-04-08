# include "list.h"
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

void list_init(list_t* list, size_t type_size) {
	list->size = 0;
	list->capacity = 2;
	list->type_size = type_size;
	list->value = malloc(list->capacity * list->type_size);
}

void list_resize(list_t* list, size_t new_capacity) {
	if (new_capacity > list->capacity) {
		void* new_value = realloc(list->value, new_capacity * list->type_size);
		if (new_value) {
			list->value = new_value;
			list->capacity = new_capacity;
			fprintf(stdout, "Memory reallocation success\n");
		}
		else {
			fprintf(stderr, "Memory reallocation failed\n");
		}
	}
}

void list_push_back(list_t* list, void* value) {
	if (list->size == list->capacity) {
		list_resize(list, list->capacity * 2);
	}
	memcpy((char*)list->value + list->size * list->type_size, value, list->type_size);
	list->size++;
}

void* list_get(list_t* list, size_t index) {
	if (index < list->size) {
		return (char*)list->value + index * list->type_size;
	}
	return NULL;
}

size_t list_size(list_t* list) {
	return list->size;
}

void list_free(list_t* list) {
	free(list->value);
	list->value = NULL;
	list->size = 0;
	list->capacity = 0;
}
