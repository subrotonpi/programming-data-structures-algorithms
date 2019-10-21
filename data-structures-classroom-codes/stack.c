#include<stdio.h>
#include<stdbool.h>
//Function Declarations
void push(int element);
int peek();
int pop();
int size();
void print_stack();
int stackEmpty();

#define MAX_SIZE 5
#define ERROR -9999999 //assumtion: no element in stack will have this value

int data[MAX_SIZE];
int top = -1;

int main(){

    printf("\n");
    stackEmpty();
    print_stack();
    push(44);
    push(55);
    push(77);
    push(88); 
    push(99); //LIFO
    print_stack();
    printf("%d\n",peek());
    int t = pop();
    if(t !=ERROR)
        printf("\n%d is removed from stack.\n",t);
    else
        printf("Empty stack");

    printf("%d\n",peek());
    
    return 0;
}
void push(int element){
    if(top<MAX_SIZE-1){
        top++;
        data[top]=element;
    }else{
        printf("Failed to push!");
    }
}
int peek(){
    printf("Element at the top:\n");
    return top != -1 ? data[top]: ERROR;
};
int pop(){
    if(top < 0){
        printf("\nStack underflow");
        return ERROR;
    }else{
        
        return data[top--];
    }
}
int stackEmpty(){
    if(top==-1){
        printf("Stack Empty\n");
        return 0;
    }else{
        printf("Stack is Not empty\n");
        return 1;
    }
    //return top == -1 ?1:0; 
}
int size(){
    return top+1;
}
void print_stack(){
    //if(top==-1): what to do?
        
    printf("\nPrinting the elements: \n");
    for(int i = top; i>=0; i--)
        printf("%d ", data[i]);
    printf("\n");
}

