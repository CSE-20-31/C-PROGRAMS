#include <stdio.h>
int main()
{
   int i, j, row=6;

   for (i = 2; i <=row; ++i) {
      for (j = 1; j <= i; j++) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}
