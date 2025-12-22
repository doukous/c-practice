#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *add_to_list(struct node *list, int n) {
    struct node *new_node;
    new_node = malloc(sizeof(struct node));

    if (new_node == NULL) {
        printf("Error : malloc failed in add_to_list\n");
        exit(EXIT_FAILURE);
    }

    new_node->value = n;
    new_node->next = list;

    return new_node;
}

struct node *delete_from_list(struct node *list, int n)
{
    struct node *curr = list, *matched_node;

    if (curr->value == n) {
        matched_node = curr;
        list = curr->next;
        free(matched_node);
        return list;
    }

    for (; curr->next != NULL && curr->next->value != n; curr = curr->next);

    if (curr->next != NULL) {
        matched_node = curr->next;
        curr->next = curr->next->next;
        free(matched_node);
    }

    return list;
}

int main(void) {
    struct node *list = NULL;

    list = add_to_list(list, 12);
    list = add_to_list(list, 10);
    list = add_to_list(list, 20);
    list = add_to_list(list, 15);
    list = add_to_list(list, 30);
    list = add_to_list(list, 40);
    list = add_to_list(list, 35);

    printf("before deletion :\n");

    struct node *cur = list;

    while (cur != NULL) {
        printf("value : %d\n", cur->value);
        cur = cur->next;
    }

    list = delete_from_list(list, 13);
    cur = list;

    printf("after deletion :\n");

    while (cur != NULL) {
        printf("value : %d\n", cur->value);
        cur = cur->next;
    }
}
