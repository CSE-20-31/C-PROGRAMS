#include <stdio.h>
int main()
{
   int i,n,series=0;

   printf("Enter the values of n: ");
   scanf("%d", &n);

   for (i = 1; i <=n; i++)
   {
         series = 5*i;

         printf("%d", series);
         printf("\n");
      }



   return 0;
}
