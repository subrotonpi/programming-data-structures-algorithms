#include<stdio.h>

int linear_search(int arr[], int k){
    
    for(int index = 0; index<sizeof(arr); index++){
        if(arr[index]==k){
            return index;
        }
    }
    return -1;
}


int main(){
    
    int numbers[5] = {10, 20, 30, 40 , 50};
    int key= 40;
    int i = linear_search(numbers, key);
    
    if(i==-1){
        printf("not found");
    }else{
        printf("found");
    }
}


