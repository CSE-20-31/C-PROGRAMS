#include<stdio.h>
int main ()
{

   int arr[250], search, n, i;

   printf("enter the size of array: ");

   scanf("%d",&n);



   printf("enter the elements of array: ");
   {
       for (i = 0; i < n; i++)
         scanf("%d", &arr[i]);
         }

       for( i=0; i<n; i++)
   {
     printf("%d ", arr[i]);
         }



   printf("enter the number you want to search: ");

   scanf("%d", &search);



   for (i = 0; i < n; i++)

   {

      if (arr[i] == search)

      {

         printf("%d is present at %d th location: ", search, i);

         break;

      }

   }

   if (i == n)

      printf("%d is not present in the array ", search);

   return 0;

}
