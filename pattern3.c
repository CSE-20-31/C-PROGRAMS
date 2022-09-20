int main()
{
    int i,j,rows;
    printf("Enter the number of rows you want to print: ");
    scanf("%d", &rows);

    printf("Printing the pattern: ");
    printf("\n");

    for(i=1; i<=rows; i++)
    {
         for(j=1; j<=rows; j++)
         {
             if((i+j)<=rows)
             {
                 printf(" ");
             }
             else
             {
                 printf("*");
             }

         }
         printf("\n");

    }


    return 0;
}
