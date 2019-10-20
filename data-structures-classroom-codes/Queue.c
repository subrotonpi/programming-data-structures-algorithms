#include<stdio.h>
#define max 4

int data[max];
void enqueue(int e);
int dequeue();
int front =-1, rear =-1;

int main(){
    enqueue(55);
    enqueue(66);
    enqueue(88);
    enqueue(99);
    enqueue(88);
    enqueue(99);

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue(); 
    enqueue(88);
    enqueue(99);
    dequeue();
    dequeue();

return 0;
}

void enqueue(int e){
    if(rear<max-1){
        if(front==-1){
            front=0;
        }
        rear++;
        data[rear]=e;
        printf("\nEnqueued %d at index %d ", data[rear], rear);
    }else{
        printf("\nQueue Full");
    }

}

int dequeue(){
    int temp;
    if(front == -1 ){
        printf("\nQueue is empty");
    }else{
        temp = data[front];
        printf("\nDequeued %d from index %d ", data[front], front);
        front++;
        if(front >rear ){
            front = -1;
            rear = -1;
        }
    }
return temp;
}