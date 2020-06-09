#include<stdio.h>
//iterative method
int sum(int n){
    int s = 0;
    while (n>0){
            s += n ;
            n--;
        }
    return s;
}

//recursive 
int sum_recur(int n){

    if(n==1){//base condtion
        printf("\nbase condition : return 1\n");
        return 1;
    }else{//recursive calls
        printf("\n%d + sum_recur(%d)\n", n, n-1);
        return n + sum_recur(n-1);
    }
}



//main
int main(){
    int n = 5; 
    int x = sum_recur(n);
    printf("%d\n", x);
    return 0;
}



