#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node * next;
    struct node * prev;
} node;

node * head, * tail;

int main(){
    node * first = (node *)malloc(sizeof(node));
    (*first).data = 10;
    (*first).next = NULL;
    (*first).prev = NULL;

    head = first;
    tail = first;

    node * second = (node *)malloc(sizeof(node));
    (*second).data = 20;
    (*second).next = NULL;
    (*second).prev = first;

    (*first).next = second;
    tail = second;

    printf("printing forward\n");
    for(node * f = head; f!=NULL; f=f->next){
        printf("%d ", f->data);
    }

    printf("\nprinting backward\n");
    for(node * f = tail; f!=NULL; f=f->prev){
        printf("%d ", f->data);
    }
    return 0;
}
