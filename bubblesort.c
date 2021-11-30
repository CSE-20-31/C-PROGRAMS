#include<stdio.h>
#include<conio.h>

int main()
{
  int arr[100];
  int n,i,j,swap;

  printf("Enter the size of array: ");
  scanf("%d", &n);

  printf("enter the elements of array: ");
  for( i=0; i<n; ++i)
  {
     scanf("%d", &arr[i]);
  }

 printf("entered array is: ");

   for( i=0; i<n; i++)
    {
     printf("%d ", arr[i]);
         }

 //sorting array//

     for(i=0; i<n; i++)
  {
	for(j=0; j<n; j++)
	  {
		if(arr[j]>arr[j+1])
		  {
			 swap = arr[j];
			 arr[j] = arr[j+1];
			 arr[j+1] = swap;
		        }
           }
    }
 //printing sorted array//

  printf("after sorting: ");

     for(i=0; i<n; i++)
     {
	   printf("%d ", arr[i]);
            }
	return 0;
}
