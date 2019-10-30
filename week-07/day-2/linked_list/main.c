#include <stdio.h>
#include "linked_list.h"

int main() {
    node_t* head = create_node(53);
    for (int i = 0; i < 10; ++i) {
        list_push_back(head, i);
    }
    print_list(head);
    printf("\n");

    list_pop_back(head);
    print_list(head);
    printf("\n");

    list_push_front(&head, 2);
    print_list(head);
    printf("\n");

    list_insert_after(get_address_by_index(head,2), 546);
    print_list(head);
    printf("\n");

    printf("%d\n", get_list_size(head));
    printf("%p\n", get_address_by_index(head, 11));
    printf("%p\n", get_address_by_index(head, 12));

    list_destroy_w_head(&head);
    printf("%p\n", head);

    return 0;
}