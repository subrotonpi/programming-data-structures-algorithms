//adding all odd numbers
//between a and b
#include <stdio.h>

int main()
{
    int a = 10,b=17;//user input
    int sum=0;
    
    int counter=a;
    while(counter<=b){
        if(counter%2==1){
            printf("Now adding %d with previous sum %d\n", counter, sum);
            sum=sum+counter;
        }
        counter++;
    }
    
    printf("TOTAL SUM: %d", sum);
    return 0;
}
