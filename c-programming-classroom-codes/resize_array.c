#include<stdio.h>
int * resizeArray(int old[], int length){
    int new_len= 2*length;
    int b[new_len];

    for(int i=0; i< new_len; i++){
        if(i<length){
            b[i]= old[i];
        }else{
            b[i]= -1;
            printf("");
        }
    }

    return b;
}

int main(){
    int a [] ={11,22,33};
    int length=sizeof(a)/sizeof(a[0]);
    printf("\nbefore resizing the array:\n ");
    for(int i = 0; i<length;i++){
        printf("%d ",a[i]);
    }

    printf("\nAfter resizing:\n");
    int * b = resizeArray(a, length);
    printf("\n");
    for (int j = 0; j < 6; j++){
        printf("%d ", b[j]);
    }

    printf("\n");
    return 0;
}

