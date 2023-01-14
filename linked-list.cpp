#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node{
    int data;
    struct node* next;
};

int traverse(struct node** head_ref){
    struct node* n = (*head_ref);

    while(true){
        if(n->next != NULL){
            printf("%d ",n->data);
            n=n->next;
    } else{
        printf("%d ",n->data);
        break;
    }
    }return 0;}

int main(){
    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;

    head = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    traverse(&head);
    return 0;
}
