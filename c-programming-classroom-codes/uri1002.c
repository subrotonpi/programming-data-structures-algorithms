#include<stdio.h>
#define pi 3.14159
int main(){
    double r, A;
    scanf("%lf", &r);
    A = pi * r * r ;
    printf("A=%.4lf\n", A);
    return 0;
}