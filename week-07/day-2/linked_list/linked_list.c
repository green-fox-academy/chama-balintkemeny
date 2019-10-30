#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"


node_t* create_node(int data)
{
    node_t* new_node = (node_t*)malloc(sizeof(node_t));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

node_t* return_tail(node_t* head_p)
{
    node_t* it_pointer = head_p;
    while (it_pointer->next) {
        it_pointer = it_pointer->next;
    }
    return it_pointer;
}

node_t* return_penultimate(node_t* head_p)
{
    node_t* it_pointer = head_p;
    while (it_pointer->next->next) {
        it_pointer = it_pointer->next;
    }
    return it_pointer;
}

node_t* get_address_by_index(node_t* head_p, unsigned int index)
{
    if (index > get_list_size(head_p) - 1)
        return NULL;
    node_t* it_pointer = head_p;
    for (unsigned int i = 0; i <index; ++i) {
        it_pointer = it_pointer->next;
    }
    return it_pointer;
}

int get_list_size(node_t* head_p)
{
    int cnt = 1;
    node_t* it_pointer = head_p;
    while (it_pointer->next) {
        it_pointer = it_pointer->next;
        cnt++;
    }
    return cnt;
}

void list_push_back(node_t* head_p, int data)
{
    if (!head_p)
        return;
    node_t* tail = return_tail(head_p);
    tail->next = create_node(data);
}

void list_push_front(node_t** head_pp, int data)
{
    if (!*head_pp)
        return;
    node_t* new_head = create_node(data);
    new_head->next = *head_pp;
    *head_pp = new_head;
}

void list_insert_after(node_t* target, int data)
{
    if (!target)
        return;
    node_t* new_node = create_node(data);
    new_node->next = target->next;
    target->next = new_node;
}

void list_pop_back(node_t* head_p)
{
    if (!head_p)
        return;
    node_t* tail = return_tail(head_p);
    node_t* penultimate = return_penultimate(head_p);
    penultimate->next = NULL;
    free(tail);
}

void list_destroy_elements(node_t* head_p)
{
    if (!head_p)
        return;
    while (head_p->next) {
        list_pop_back(head_p);
    }
}

void list_destroy_w_head(node_t** head_pp)
{
    list_destroy_elements(*head_pp);
    free(*head_pp);
    *head_pp = NULL;
}

void print_list(node_t* head_p)
{
    node_t* it_pointer = head_p;
    while (it_pointer) {
        printf("Element address.: %p, Element value: %d\n", it_pointer, it_pointer->data);
        it_pointer = it_pointer->next;
    }
}