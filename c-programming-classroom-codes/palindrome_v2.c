#include<stdio.h>
int main()
{
    char a[1007];
 
    scanf("%s",a);
 
    int l=strlen(a);
    int j=l-1,f=0,i;
    for(i=0;i<l;++i,--j){
        if(a[i]!=a[j]){
            f=1;
        }
    }
 
    if(f==1){
        printf("Not Pallindrome");
    }
    else {
        printf("Pallindrome");
    }
}
