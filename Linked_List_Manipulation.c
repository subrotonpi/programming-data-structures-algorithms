#include<stdio.h>
#include<stdlib.h>

//declare node structure
struct node{
    int data;
    struct node * next;
    };
//typedef
typedef struct node node ;
//head reference declared and set to null
node * head = NULL;

//function declaration
void creaetList(int d);
void AddAtBeginnig(int d);
int count(node * head);
void printList(node * head);

//main
int main(){
    creaetList(100);
    AddAtBeginnig(200);
    AddAtBeginnig(300);
    printList(head);
    printf("\nNumber of nodes: %d\n",count(head));
    
    return 0;
}
/*
    --this functions create and add a node right after head
*/
void creaetList(int d){
        node * temp = (node *)malloc(sizeof(node));
        //if the memory allocation failed, we can't continue further
        //so we need to check
        if(temp != NULL)
            temp->data = d;
            temp->next = NULL;  

    //special case, list is empty yet
    if(head == NULL){
        head = temp;
    }else{
        //go to the end of list
        node * q = head;
        while(q->next!=NULL)
            q=q->next;
        //add new node to the last node
        q->next=temp;
    }
            
}
//This function will add new element at the beginning of the linked list 
void AddAtBeginnig(int d){
    node * temp =  (node*)malloc(sizeof(node)); 
    temp->data=d;
    temp->next=head;
    head=temp;
}


/*
    --this function counts and returns the number of nodes in the list
    ----parameter head is a pointer/reference to the start of the list
*/
int count(){
    int i = 0;
    if(head == NULL)
        return i;
    //count
    for(node * n = head; n!=NULL; n=n->next){
        i++;
    }
    
    return i;
}


/*
    --this function prints all the element in the list.
    --parameter head is a pointer/reference to the start of the list
*/
void printList(){
    if(head == NULL){
        printf("The list is empty!\n");
    }else{
        printf("\nPrinting List:\n");
        for(node * n = head; n!=NULL; n=n->next){
            printf("%d  ", n->data);
        }
    }
    printf("\n");
}

