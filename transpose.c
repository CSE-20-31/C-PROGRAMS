#include<stdio.h>

int main()
{
     int a[100][100];
     int b[100][100];
     int i,j,m,n;
     int sum1=0;
     int sum2=0;

     // GETTING MATRIX INPUT //
     printf("Enter the no of rows and columns of matrix: ");
     printf("\n");
     scanf("%d %d", &m,&n);

     printf("Enter the matrix data row wise: ");
     for(i=0; i<m; i++)
     {
         for(j=0; j<n; j++)
         {
             scanf("%d", &a[i][j]);
         }
     }

     // DISPLAYING THE MATRIX //
     printf("The entered matrix is:");
     printf("\n");

     for(i=0; i<m; i++)
     {
         for(j=0; j<n; j++)
         {
             printf("%d ", a[i][j]);
         }
         printf("\n");
     }

     // FINDING SUM OF DIAGONAL ELEMENTS OF ORIGINAL MATRIX //

    for(i=0; i<m; i++)
     {
         for(j=0; j<n; j++)
         {
            if(i==j)
            {
                sum1 = sum1 + a[i][j];
            }
         }

     }
     printf("The sum of diagonal elements of original matrix is %d", sum1);
     printf("\n");


     //FINDIND THE TRANSPOSE //

      for(i=0; i<m; i++)
     {
         for(j=0; j<n; j++)
         {
             b[j][i] = a[i][j];
         }
     }

     // DISPLAYING THE TRANSPOSE //

     printf("The transpose of the matrix is:");
     printf("\n");

     for(i=0; i<n; i++)
     {
         for(j=0; j<m; j++)
         {
             printf("%d ", b[i][j]);
         }
         printf("\n");
     }

     // FINDING SUM OF DIAGONAL ELEMENTS OF TRANSPOSE MATRIX //

      for(i=0; i<n; i++)
     {
         for(j=0; j<m; j++)
         {
            if(i==j)
            {
                sum2 = sum2 + b[i][j];
            }
         }

     }
     printf("The sum of diagonal elements of transpose matrix is %d", sum2);
     printf("\n");




}

