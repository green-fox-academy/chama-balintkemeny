#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H

typedef struct {
    int init_status;
    int size;
    int capacity;
    int* data;
} i_vector_t;

void init_i_vector(i_vector_t* vector, int vec_capacity);
void destroy_i_vector(i_vector_t* vector);
void i_push_back(i_vector_t* vector, int el_value);
void i_insert_at(i_vector_t* vector, int el_value, int el_index);
void i_pop_back(i_vector_t* vector, int el_quantity);
int i_element_at(i_vector_t* vector, int el_index);
void i_print(i_vector_t* vector);

#endif //VECTOR_VECTOR_H
