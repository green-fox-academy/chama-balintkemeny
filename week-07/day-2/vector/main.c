#include <stdio.h>
#include "vector.h"

int main() {
    i_vector_t test_vector;
    test_vector.init_status = 0;
    init_i_vector(&test_vector, 10);
    i_print(&test_vector);

    for (int i = 0; i < 10; ++i) {
        i_push_back(&test_vector, i);
        i_print(&test_vector);
    }

    i_insert_at(&test_vector, 666, 4);
    i_print(&test_vector);

    i_pop_back(&test_vector, 2);
    i_print(&test_vector);

    for (int i = 0; i < test_vector.size; ++i) {
        printf("Element at index %d: %d\n", i, i_element_at(&test_vector, i));
    }

    destroy_i_vector(&test_vector);
    i_print(&test_vector);
    return 0;
}