#include<stdio.h>

int main()
{
  int arr[100];
  int n,i;

  printf("Enter the size of array: ");
  scanf("%d", &n);

  printf("enter the elements of array: ");
  for( i=0; i<n; ++i)
  {
     scanf("%d", &arr[i]);
  }

   for( i=0; i<n; i++)
   {
     printf("%d ", arr[i]);
  }
  return 0;
}
