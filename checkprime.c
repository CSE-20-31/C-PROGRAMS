#include<stdio.h>

int checkprime(int);

 int main()
{
   int n, result;

   printf("Enter an integer: ");
   scanf("%d",&n);

   result = checkprime(n);

   if ( result == 1 )
      printf("%d is prime", n);
   else
      printf("%d is not prime", n);

   return 0;
}

int checkprime(int a)
{
   int x;

   for (x=2 ; x<=a-1 ; x++)
   {
      if (a%x==0)
     return 0;
   }
     return 1;
}
