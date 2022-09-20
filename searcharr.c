#include<stdio.h>

int main()
{
   int a[3][3];
   int i,j;
   int sum=0;

   printf("Enter the elements of the matrix: ");

   for(i=0; i<=2; i++)
   {
      for(j=0; j<=2; j++)
      {
         scanf("%d", &a[i][j]);
      }

   }

    for(i=0; i<=2; i++)
   {
      for(j=0; j<=2; j++)
      {
         printf("%d ", a[i][j]);
      }
      printf("\n");

   }

   for(i=0; i<=2; i++)
   {
      for(j=0; j<=2; j++)
      {
         if(i==j)
         {

             sum = sum + a[i][j];
         }
      }
   }

   printf("the sum of diagonal elements is %d", sum);

   return 0;

}
