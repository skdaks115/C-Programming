#include <stdio.h>

int main()
{
    int n;
    printf("입력:");
    scanf("%d", &n);

    printf("%s", (n%2==0)?"Even":"Odd");
    return 0;
}