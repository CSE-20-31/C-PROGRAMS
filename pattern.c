#include<stdio.h>

int main()
{
    int i,j,rows,cols;

    printf("Enter the number of rows you want to print: ");
    scanf("%d", &rows);

    printf("Enter the number of columns you want to print: ");
    scanf("%d", &cols);

    printf("Printing the pattern: ");
    printf("\n");

    for(i=1; i<=rows; i++)
    {
         for(j=1; j<=cols; j++)
         {
             printf("* ");
         }
         printf("\n");
    }

    return 0;
}
