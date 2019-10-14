#include <stdio.h> 
int main(){

  int p=22, q=44;
  
  int *a=&p;
  int *b= &q;

  int *arr[2];
   
  arr[0]=a;
  arr[1]=b;
  
  printf("%d\n%d\n",*arr[0],*arr[1]);
  
  return 0;
}
