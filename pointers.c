#include<stdio.h>

int main()
{
    int x;
    int *p;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    p = &x;
    printf("The address of memory location where %d is stored is %x", x,p);
    printf("\n");

    printf("The value at memory address that is stored in p is %d", *p);

}
