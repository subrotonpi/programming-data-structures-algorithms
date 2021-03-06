#include<stdio.h>
#include<stdlib.h>
//Function declaration
void printArray(int * data, int len); //Printing an array
int * copyArray(int * source,int * copy ,  int length_arr);//Copying an array 
int * resizeArray(int * arr, int length_arr);//Resizing an array 
int * reverseArray(int * data, int length);//Reverse an array, in-place
int * shiftLeft(int * data, int length);//shift left
//Main function starts
int main(){
//CREATING
    /* 
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50; 
    */
    //or like this. Is there any other way to do this?
    int arr[5] = {10,20,30,40,50};
    //Length of array in C??
    int length_arr = sizeof(arr)/sizeof(arr[0]); //what is sizeof()? what does it do?
//ITERATING
    printf("Iterating over the elements\n");
    for(int i = 0;i<length_arr;i++){
        printf("Element at index %d is %d\n", i, arr[i]);
    }
    printf("\n");
//COPY
    printf("Copying an array:\n\n");
    int * new_arr = (int *)malloc(5*sizeof(int)); // How about this ?
    int * p_new_arr = copyArray(arr, new_arr, length_arr);
    printArray(p_new_arr, length_arr);
    printf("\n");
//RESIZE
    printf("Resizing array\n");
    int * resize= resizeArray(arr,length_arr);
    printArray(resize, 2*length_arr);
    printf("\n");
//REVERSE
    printf("Reversing array\n");
    int * reverse= reverseArray(arr,length_arr);
    printArray(reverse, length_arr);
    printf("\n");
//SHIFT LEFT
    printf("Shifting left by one element\n");
    int * sleft= shiftLeft(arr,length_arr);
    printArray(sleft, length_arr);
    printf("\n");
/*
TODO: 
    Shifting an array right
    Inserting an element into an array
    Removing an element from an array
    Rotating an array left
    Rotating an array right
*/
    //main return
    return 0;
}
//end of main function
//Shifting left, deletes the first element or saves it to the last index
int * shiftLeft(int * data, int length){
    int temp= data[0];

    for(int i=1; i<length;i++){
        data[i-1]=data[i];
    }
    //already shifted by one 
    //save the first element to last or delete the last? this makes rotation! Later, circular array will show more elegant way!
    data[length-1]=temp;
    //OR
    //data[length-1]=0;
    return data;
}

//Resizing an array
int * resizeArray(int * data, int length_arr){
    //Need an array with double length!
    //declare new array with douible size
    int * resize= (int *)malloc(2*length_arr*sizeof(int));
    resize = copyArray(data, resize, length_arr);
    return resize;
}
//Reverse an array
int * reverseArray(int * data, int length){
    int i = 0, j = length-1;
    while(i<j){
        int temp = data[i];
        *(data+i) = data[j];
        data[j]=temp;
        //*(data+i) is same as data[i]
        i++;
        j--;
    }
    return data;
}
//Copying an array  
int * copyArray(int * source, int * copy , int len){ // is this length variable is same as the one previsouly declared?
    for(int i = 0; i<len;i++){
        copy[i]=source[i];
    }
    return copy;
}

//Printing an array
void printArray(int * data, int len){
    for(int j = 0; j<len; j++){
            printf("Elementat at [%d] is %d\n", j , *(data+j));
        }
}
