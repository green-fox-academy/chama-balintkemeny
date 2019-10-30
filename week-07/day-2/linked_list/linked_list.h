#ifndef LINKED_LIST_LINKED_LIST_H
#define LINKED_LIST_LINKED_LIST_H

typedef struct node {
    int data;
    struct node* next;
} node_t;

node_t* create_node(int data);
node_t* return_tail(node_t* head_p);
node_t* return_penultimate(node_t* head_p);
node_t* get_address_by_index(node_t* head_p, unsigned int index);
int get_list_size(node_t* head_p);
int list_is_empty(node_t* head_p);
void list_push_back(node_t* head_p, int data);
void list_push_front(node_t** head_pp, int data);
void list_insert_after(node_t* target, int data);
void list_pop_back(node_t* head_p);
void list_pop_front(node_t** head_pp);
void list_delete_node(node_t** head_pp, node_t* target);
void list_destroy_elements(node_t* head_p);
void list_destroy_w_head(node_t** head_pp);
void print_list(node_t* head_p);


#endif //LINKED_LIST_LINKED_LIST_H
