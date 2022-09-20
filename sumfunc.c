#include<stdio.h>

int add(int n)
{
    int temp;

    if(n==1)
    return 1;

    else
    temp = n+add(n-1);
    return temp;
}

int main()
{
   int n,sum;

   printf("Enter the total numbers whose sum we have to calculate: ");
   scanf("%d", &n);

   sum = add(n);
   printf("The sum of  first %d natural numbers is %d: ", n,sum);
}
