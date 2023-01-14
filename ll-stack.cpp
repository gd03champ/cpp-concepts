#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node{
    int data;
    struct node* next;    
};

//stack implememtation, insert at front and delete at front

int push(struct node** head_ref,n){

    struct node* new_node = (struct node*) malloc(struct node);
    new_node->data = n;
    new_node->next = (*head_ref)

    (*head_ref) = new_node;
    return 0;
}

int pop(struct node** head_ref,n){
    struct node* temp = (*head_ref)
    (*head_ref) = temp->next;

    free(temp);
    return 0;
}