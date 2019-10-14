#include <stdio.h>

int main()
{ 
    int num[3];
   for(int i=0; i<=2;i++){
       printf("input:\n");
      scanf("%d",&num[i]);
  }
  printf("Printing...\n"); 
  for(int i=0; i<=2;i++){
      printf("%d\n",num[i]);
  }  
  printf("Printing in reverse...\n"); 
  for(int i=2; i>=0;i--){
      printf("%d\n",num[i]);
  }  
  
 
    return 0;
}
