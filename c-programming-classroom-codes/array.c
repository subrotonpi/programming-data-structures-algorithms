#include <stdio.h>

int main()
{
    //array
    //33 12 11 54
   // int flag=0;
    int numbers [4]={33,54,11,54};
   /* numbers[0]=33;
    numbers[1]=12;
    numbers[2]=11;
    numbers[3]=54;
    */
   /*  for(int c=0; c<4;c++){
       numbers[c]=10+c*c;
    }
    */
    int max=numbers[0];
    
    for(int i=1; i<4;i++){
        if(max<numbers[i]){
            max=numbers[i];
            //printf(" %d\n",numbers[i]);
           // flag=1;
        }
        
    }
    
    printf("Max: %d",max);
    /*if(flag==0){
        printf("No!");
    }*/
    
    return 0;
}
