#include <stdio.h>

int main()
{
    int x=5, y=10, z=15;
    printf("1. x= %d\n", x*=5);
    y-=x--;
    printf("2. x, y= %d,%d\n", x,y);
    z=((++x)-(y--));
    printf("3. z= %d\n", z--);
    
    
    

    return 0;
}

/*
Output:

1. x= 25
2. x, y= 24,-15
3. z= 40

*/
