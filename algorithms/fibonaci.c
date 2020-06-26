#include<stdio.h>

int main(){
    //varibale declaration
    int a = 0, b = 1; 
    int a[] = {10,20,30};
    print(a);
    //naive approach
    //loop from 2nd to nth fibonacci no.
    for(int i= 0; i<8; i++){
        int c = a+b;//add previous two
        printf("%d ", c);//print
        a = b;//swap variable
        b = c;
    }
    return 0;
}

void print(int a []){
    for(int i = 0; i<sizeof(a);i++){
        printf("%d", a[i]);
    }
}