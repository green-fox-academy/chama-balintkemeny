#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

void init_i_vector(i_vector_t* vector, int vec_capacity)
{
    if (vector->init_status == 1) {
        printf("Warning: Vector already initialized, reinitializing vector.\n");
        free(vector->data);
    }
    if (vec_capacity < 1) {
        printf("Error: Invalid vector capacity!\n");
        vec_capacity = 1;
    }
    vector->data = (int*)calloc(vec_capacity, sizeof(int));
    vector->capacity = vec_capacity;
    vector->size = 0;
    vector->init_status = 1;
}

void destroy_i_vector(i_vector_t* vector)
{
    free(vector->data);
    vector->init_status = 0;
    vector->capacity = 0;
    vector->size = 0;
}

void i_push_back(i_vector_t* vector, int el_value)
{
    if (vector->size >= vector->capacity) {
        vector->capacity *= 2;
    }
    vector->data[vector->size] = el_value;
    vector->size++;
}

void i_pop_back(i_vector_t* vector, int el_quantity)
{
    vector->size -= el_quantity;
    if (vector->size < vector->capacity / 2) {
        vector->capacity /= 2;
        vector->data = (int*)realloc(vector->data, vector->capacity * sizeof(int));
    }
}

int i_element_at(i_vector_t* vector, int el_index)
{
    if (el_index < 0) {
        printf("Index out of bounds.\n");
        el_index = 0;
    }
    if (el_index >= vector->size) {
        printf("Index out of bounds.\n");
        el_index = vector->size - 1;
    }
    return vector->data[el_index];
}