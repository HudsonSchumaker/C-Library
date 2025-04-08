#ifndef LIST_H
#define LIST_H

typedef struct {
	void* value;
	size_t size;
	size_t capacity;
	size_t type_size;
} list_t;

void list_init(list_t* list, size_t type_size);
void list_resize(list_t* list, size_t new_capacity);
void list_push_back(list_t* list, void* value);
void* list_get(list_t* list, size_t index);
size_t list_size(list_t* list);
void list_free(list_t* list);

#endif
