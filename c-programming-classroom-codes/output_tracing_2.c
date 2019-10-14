#include <stdio.h>

int main()
{
    int i, x;
    for(i=1,x=1;i<20;i+=2)
    {
        if(x%4==3){
            x*=2;
            continue;
        }
        
        x-=i;
        printf("%d\n",x);
        
        if(x%10==0){
            break;
        }
        
    }

    return 0;
}

//Output: 0
