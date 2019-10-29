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
        vector->data = (int*)realloc(vector->data, vector->capacity * sizeof(int));
    }
    vector->data[vector->size] = el_value;
    vector->size++;
}

void i_insert_at(i_vector_t* vector, int el_value, int el_index)
{
    if (el_index < 0) {
        printf("Index out of bounds.\n");
        el_index = 0;
    }
    if (el_index >= vector->size) {
        printf("Index out of bounds.\n");
        el_index = vector->size - 1;
    }
    if (vector->size >= vector->capacity) {
        vector->capacity *= 2;
        vector->data = (int*)realloc(vector->data, vector->capacity * sizeof(int));
    }
    for (int i = vector->size - 1; i >= el_index; --i) {
        vector->data[i + 1] = vector->data[i];
    }
    vector->data[el_index] = el_value;
    vector->size++;
}

void i_pop_back(i_vector_t* vector, int el_quantity)
{
    vector->size -= el_quantity;
    if (vector->size < 0) {
        printf("Warning: Vector getting nullified.\n");
        vector->size = 0;
    }
    if (vector->size < vector->capacity / 2) {
        vector->capacity /= 2;
        vector->data = (int*)realloc(vector->data, vector->capacity * sizeof(int));
    }
}

void i_delete_at(i_vector_t* vector, int el_index)
{
    if (el_index < 0) {
        printf("Index out of bounds.\n");
        return;
    }
    if (el_index >= vector->size) {
        printf("Index out of bounds.\n");
        return;
    }

    int tmp = 0;
    if (el_index != vector->size - 1) {
        for (int i = el_index; i < vector->size - 1; ++i) {
            vector->data[i] = vector->data[i + 1];
        }
    }
    i_pop_back(vector, 1);
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

void i_print(i_vector_t* vector)
{
    printf("Size: %d, Capacity: %d, Init status:%d\n", vector->size, vector->capacity, vector->init_status);
    if (!vector->init_status)
        return;
    printf("Data: {");
    for (int i = 0; i < vector->size; ++i) {
        printf("%d", vector->data[i]);
        if (vector->size != vector->capacity || i != vector->size - 1) {
            printf(", ");
        }
    }
    for (int i = vector->size; i < vector->capacity; ++i) {
        printf("_");
        if (i != vector->capacity - 1) {
            printf(", ");
        }
    }
    printf("}\n");
}

int i_get_remaining_capacity(i_vector_t* vector)
{
    return vector->capacity - vector->size;
}