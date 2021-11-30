#include<stdio.h>

int main ()
{
    int x,n;
    int fact=1;

    printf(" enter the number ");
    scanf("%d", &x);

     for(n=x; n>=1; n--)
     {
         fact=(fact*n);

     }
         printf("the factorial of the entered number is %d", fact);


}
