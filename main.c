#include <stdio.h>
#include <stdlib.h>
#include "List_Node.h"


int main() {

    struct Node *head;
    struct Node *new;

    new = new_node("zeke", 12);
    list_insert(&head, new);

    new = new_node("bill",6);
    list_insert(&head, new);

    new = new_node("chris", 32);
    list_insert(&head, new);

    new = new_node("fred",32);
    list_insert(&head, new);

    new = new_node("eric", 45);
    list_insert(&head, new);

    new = new_node("laura", 32);
    list_insert(&head, new);


    print_list(head);

    struct Node *temp;
    while (head !=  NULL){
        temp =head;
        head = head->next;
        free(temp);
    }



    return 0;
}