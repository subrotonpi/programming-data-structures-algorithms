#include <stdio.h>
int main(){
    int a , b, c, d, DIFERENCA;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    DIFERENCA = (a*b - c*d);

    printf("DIFERENCA = %d\n",DIFERENCA);
    return 0;
}