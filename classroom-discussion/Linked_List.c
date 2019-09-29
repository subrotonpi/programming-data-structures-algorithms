#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

typedef struct node node;

int main(){
    //declare head
    node * head =  NULL;
    printf("Pointer head contains nothing now, %p", head);
    //create first node
    node first;
    printf("\nCreated first node at %p \n", &first);
    first.data=10;
    printf("Assigned first.data which is %d ", first.data);
    first.next=NULL;
    //assign address of first node to head
    head = &first;
    printf("\nHead should have same address as first's address\n %p == %p\n", head, &first);
    //create second node usig malloc
    node *second=(node *)malloc(sizeof(node));
    second->data=20;
    second->next =NULL;
    //assign second's address in first's next
    first.next=second;
    printf("\nFirst.next should have same address as second's address\n %p == %p\n", first.next, second);
    //print all element in the list
    int i =1;
    for(node * n = head; n!=NULL; n=n->next){
        printf("\nNode %d at Address: %X, Element: %d \n",i, n, n->data);
        i++;
    }

    return 0;
}
