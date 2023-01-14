#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
    int data;
    struct node* next;
}

//Queue implementation (insertion at end and deletion at front)

struct node* Head = (struct node*)malloc(struct node);
 
int traverse(&Head){
    struct node* n;

    while(true){
        if(n->next!=NULL){
            print("%d",n->data);
            n=n->next;
        } else {
            print("%d",n->data);
        } return 0;
    }
}

int pop(struct node** head_red){

    struct node* temp = (*head_ref);
    (*head_ref) = temp->next;
    free(temp);

    return 0;
    
}

int push(struct node** head_ref,int n){

    struct node* list = (*head_ref);
    
    struct node* new_node = (struct node*)malloc(sizeof(struct node*));
    new->data = n;

    while(true){
        if (list->next == NULL){
            list->next=new_node;
            new_node->next=NULL;
        }else{
            list=list->next;
        }
    }
}

int main{

    int n;
    int value;

    while(true){
        traverse(&head);
        printf("1-> Push\n2->Pop\nEnter: "); scanf("%d",&n);
        switch (n)
        {
        case 1:
            printf("Enter value to push: ");scanf("%d",&value);
            push()
            break;
        
        default:
            break;
        }
    }
}

