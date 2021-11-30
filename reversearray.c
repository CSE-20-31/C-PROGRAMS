#include<stdio.h>
int main ()
{
    int arr[] = {1,5,8,7,9};
    int i;

      for(i = sizeof(arr) / sizeof(int)-1; i>=0; i--)

          printf("%d ", arr[i]);

    return 0;
}
