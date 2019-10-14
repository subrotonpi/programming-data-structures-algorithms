#include<stdio.h>
#include<string.h>
int main(){
    char p[100]="madam";
    int len=strlen(p), mid=0;
    int flag=1;
    if(len%2==0)
        mid=(len/2) -1;
    else
        mid=len/2;
 
    int i=0;
    for(; i<=mid;i++){
        if(p[i]!=p[len-1-i]){
            flag=0;
            break;
        }
    }
 
 
    if(flag==0)
        printf("Not palindrome!");
    else
        printf("Palindrome!!");
 
 
return 0;
}
