
#include "array.h"
#include <stdio.h>
#include <stdlib.h>

// Macro to access the raw data of the array
#define ARRAY_RAW_DATA(array) ((int*)(array) - 2)
// Macro to get the capacity of the array
#define ARRAY_CAPACITY(array) (ARRAY_RAW_DATA(array)[0])
// Macro to get the number of occupied elements in the array
#define ARRAY_OCCUPIED(array) (ARRAY_RAW_DATA(array)[1])

// Function to hold the array and manage its capacity
void* array_hold(void* array, int count, int item_size) {
    if (array == NULL) {
        // Calculate the raw size required for the new array
        int raw_size = (sizeof(int) * 2) + (item_size * count);
        // Allocate memory for the array
        int* base = (int*)malloc(raw_size);
        base[0] = count;  // Set capacity
        base[1] = count;  // Set occupied count
        return base + 2;  // Return pointer to the usable part of the array
    } else if (ARRAY_OCCUPIED(array) + count <= ARRAY_CAPACITY(array)) {
        // If there is enough capacity, increase the occupied count
        ARRAY_OCCUPIED(array) += count;
        return array;  // Return the existing array
    } else {
        // Calculate the needed size and new capacity
        int needed_size = ARRAY_OCCUPIED(array) + count;
        int float_curr = ARRAY_CAPACITY(array) * 2;
        int capacity = needed_size > float_curr ? needed_size : float_curr;
        int occupied = needed_size;
        // Calculate the raw size required for the expanded array
        int raw_size = sizeof(int) * 2 + item_size * capacity;
        // Reallocate memory for the array
        int* base = (int*)realloc(ARRAY_RAW_DATA(array), raw_size);
        base[0] = capacity;  // Set new capacity
        base[1] = occupied;  // Set new occupied count
        return base + 2;     // Return pointer to the usable part of the array
    }
}

// Function to get the length of the array
int array_length(void* array) {
    return (array != NULL) ? ARRAY_OCCUPIED(array) : 0;
}

// Function to free the memory allocated for the array
void array_free(void* array) {
    if (array != NULL) {
        free(ARRAY_RAW_DATA(array));
    }
}
