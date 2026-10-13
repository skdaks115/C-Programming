#include <stdio.h>

int main()
{
    int i = 10;
    int *p;

    p = &i;

    printf("p = %p \n", p);
    printf("(*p)++ = %d \n", (*p)++);
    printf("(*p)+1 = %d \n", (*p)+1);
    printf("*p+=1 = %d \n", *p+=1);
    printf("(*p)+=1 = %d \n", (*p)+=1);
    printf("*p=*p+1 = %d \n", *p=*p+1);
    printf("++*p = %d \n", ++*p);
    printf("++(*p) = %d \n", ++(*p));

    return 0;
}