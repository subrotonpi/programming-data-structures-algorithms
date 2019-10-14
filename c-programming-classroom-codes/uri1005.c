#include <stdio.h>
int main(){
    double a , b, MEDIA;
    scanf("%lf", &a);
    scanf("%lf", &b);
    MEDIA = (3.5*a + 7.5*b)/(3.5+7.5);

    printf("MEDIA = %.5f\n",MEDIA);
    return 0;
}