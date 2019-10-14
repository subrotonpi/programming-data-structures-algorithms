#include <stdio.h>

int main()
{
    /*
    a: user input
    n: mod factor
    sum: summation
    y: digit we need
    x: temporary variable to hold remainder
    c: loop variable equals the length of number
    
    */
    int a=5234, n=1000, sum=0, c=0, x=0,y=0;
    
    printf("n=%d y=%d a=%d sum%d\n",n,y,a,sum);
    
    while(c<4){
        x=a%n;// x is the remainder
        y=(a-x)/n;//y is the extracted digit
        a=x;//the remain part is our new number
        n=n/10;//factor by which we mod the number
        sum=sum+y;//summing up
        printf("n=%d y=%d a=%d sum%d\n",n,y,a,sum);
        c++;
    }
    
    printf(":::::sum=%d::::::", sum);
    return 0;
}
