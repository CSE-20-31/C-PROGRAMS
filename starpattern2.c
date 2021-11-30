#include<stdio.h>
int main ()
{
    int x, y;
    int rows = 6;

   for (x = rows;  x >= 1;  --x)
   {
      for (y = 1;  y <= x;  ++y)
      {
         printf("* ");
      }
         printf("\n");
   }
   return 0;
}
