//implementation of circular array
#include<stdio.h>
#include<stdlib.h>

int main(){
    int data[]={8,9,10,0,0,0,4,5,6,7};// Asumption: 0 means empty/no element in that index 
    int capacity = sizeof(data)/sizeof(data[0]);
    int start =6;
    int size = 7;
    //int end = (start + size - 1) % capacity //index of last element
    int k =start;
    printf("\nForward iteration\n");
    for(int i = 0; i<size; i++){
        printf("%d ", data[k]);
        k = (k+1)%capacity;
    }

    printf("\nBackward iteration\n");
    k = (start + size - 1) % capacity; //int end = (start + size - 1 ) % capacity//index of last element
    for (int i = 0; i<size; i++) {
        printf("%d ", data[k]);
        k--;
        if (k == -1)
            k = capacity - 1;
    }
     printf("\n");

     /*TODO
        1. Linearizing a circular array  (Linearized array is a copy of the circular array, with its first element at index 0.)
        2. Resizing a circular array (linearize it first.)
        # Inserting an element in a circular array //Done bellow for you
        3. Removing an element in a circular array (Do it !)
    */

    //Inserting new element
    //INSERT 13 at position 1
    /* IF size == capacity 
            DO RESIZE
    */
    int element = 13, position = 4; //position is not the index, it is the 4th element starting from first elemtnt
    int number_of_shifts = size - position;
    int from = (start + size - 1) % capacity;
    int to = (from + 1) % capacity;
    for (int i = 0; i < number_of_shifts; i++) {
          data[to] = data[from];
	  // move to and from backwards.
	  to = from;
	  from = from - 1; //from goes backward!
	  if (from == -1)
	      from = capacity-1;
      }
    int index = (start + position) % capacity;
    data[index] = element;

    size = size +1;
    printf("Forward teration after inserting alement 13 at 4th position\n");
    k = start;
    for(int i = 0; i<size; i++){
            printf("%d ", data[k]);
            k = (k+1)%capacity;
        }
    printf("\n");
    //ends main function
    return 0;
}
