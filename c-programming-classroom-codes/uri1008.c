#include <stdio.h>
int main(){
    int NUMBER, hour;
    double amount, SALARY;
    scanf("%d", &NUMBER);
    scanf("%d", &hour);
    scanf("%lf", &amount);
    SALARY = hour * amount;

    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %.2f\n",SALARY);
    return 0;
}