#include <stdio.h>
struct Student{
    int id;
    float cgpa;
};

typedef struct Student std;

int main()
{
   std s1;
   struct Student s2;   
   
   s1.id=7777;
   s2.id=8888;
   
   s1.cgpa=0.00;
   s2.cgpa=9.99;
   std arr[2];
	arr[0]=s1;
	arr[1]=s2;
   
    printf("s1: %d->%f\ns2: %d->%f", arr[0].id, arr[0].cgpa, arr[1].id, arr[1].cgpa);
    return 0;
}








