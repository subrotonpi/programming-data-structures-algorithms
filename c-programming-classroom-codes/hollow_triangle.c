#include<stdio.h>
int main(){
    int n=9, i,j;
    for(i=1; i<=n;i++){
        for(j=1; j<=n-i; j++){
            printf("-"); //instead of space, '-' is used
        }
        for(j=1; j<=2*i-1; j++){
            if(j==1 || j==2*i-1|| i==n )
                printf("A"); //instead of '*', 'A' is used
            else
                printf("-");
        }
        printf("\n");
    }
return 0;
}
//Q: Can you do it in a easier way?
