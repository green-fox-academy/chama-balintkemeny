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

    printf("Remaining capacity: %d\n", i_get_remaining_capacity(&test_vector));

    i_delete_at(&test_vector, 8);
    i_print(&test_vector);

    printf("Value 666 is found at index: %d\n", i_search(&test_vector, 666));

    test_vector.data[5] = 3;
    i_print(&test_vector);

    i_unique(&test_vector);
    i_print(&test_vector);

    destroy_i_vector(&test_vector);
    i_print(&test_vector);
    return 0;
}