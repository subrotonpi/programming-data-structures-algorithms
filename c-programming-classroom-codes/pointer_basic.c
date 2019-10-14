#include <stdio.h>
int main()
{
    int a=10, b=20;
    int *u=&a, *v=&b;
    int sum = *u + *v;
    printf("sum = %d\n", sum);
return 0;

}
