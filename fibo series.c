#include <stdio.h>
int main()
{
 
  int term1 = 1, term2 = 1 , j, n;

 int nxtterm = term1 + term2;

    printf("Enter number of terms you want: ");
  scanf("%d", &n);

   printf("series is as : %d, %d, ",term1, term2);
  for (j = 3; j <= n; j++)
   {
    printf("%d, ", nxtterm);
    term1 = term2;
    term2 = nxtterm;
    nxtterm = term1 + term2;
  }

  return 0;
}