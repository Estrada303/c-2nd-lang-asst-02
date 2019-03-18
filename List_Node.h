//
// Created by Ernesto Estrada on 3/15/2019.
//

#ifndef C_2ND_LANG_ASST_02_LIST_NODE_H
#define C_2ND_LANG_ASST_02_LIST_NODE_H

#include <memory.h>
//defining the struct
struct person {
    char *name;
    int age;
};

//defining the nodes with data struct type persson as data.
struct Node {
    struct Node *next;
    struct person data;
};

//creates a new node
struct Node *new_node(char *name, int age) {
    struct Node *new_node =
            (struct Node *) malloc(sizeof(struct Node));

    new_node->data.name = name;
    new_node->data.age = age;
    new_node->next = NULL;

}

//prints the list
void print_list(struct Node *head_ptr) {
    struct Node *temp = head_ptr;

    while (temp != NULL) {
        printf("\nName: %s Age: %d", temp->data.name, temp->data.age);
        temp = temp->next;
    }

}

//compares the names in the data portion of the node
int compare_nodes(struct Node *node1, struct Node *node2) {
    char *str1;
    str1 = node1->data.name;

    char *str2;
    str2 = node2->data.name;


    int i = strcmp(str1,str2);

    return i;
}

//inserts node in alpha order
void list_insert(struct Node **head_ptr, struct Node *new_ptr ) {
    struct Node *current;

    if (*head_ptr == NULL || compare_nodes(*head_ptr, new_ptr) > 0) {
        new_ptr->next = *head_ptr;
        *head_ptr = new_ptr;
    } else {
        current = *head_ptr;
        while (current->next != NULL && compare_nodes(new_ptr, current->next) > 0) {
            current = current->next;
        }

        new_ptr->next = current->next;
        current->next = new_ptr;
    }
}
#endif //C_2ND_LANG_ASST_02_LIST_NODE_H
